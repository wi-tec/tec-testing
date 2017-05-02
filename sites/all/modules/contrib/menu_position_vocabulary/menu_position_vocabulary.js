(function ($) {

/**
 * Provide the summary information for the content type plugin's vertical tab.
 */
Drupal.behaviors.menuPositionVocabularySettingsSummary = {
  attach: function (context) {

    $('fieldset#edit-vocabulary', context).drupalSetSummary(function (context) {
      var vals = [];
      $('select option:selected', context).each(function () {
        if ($(this).val() != 0) {
          vals.push($.trim($(this).text()));
        }
      });
      if (!vals.length) {
        vals.push(Drupal.t('Any vocabulary'));
      }
      return vals.join(', ');
    });
  }
};

})(jQuery);
