/*
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <math.h>

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef PI
#define PI  (3.14159f)
#endif

// LVGL image declare
LV_IMG_DECLARE(esp_logo)
//LV_IMG_DECLARE(esp_logo)
//LV_IMG_DECLARE(esp_text)

typedef struct {
    lv_obj_t *scr;
} my_timer_context_t;

static lv_obj_t *arc[3];
static lv_obj_t *img_logo;
static lv_obj_t *img_text;

/* //demo for lvgl v8+
void create_demo_application(lv_obj_t *scr)
{
    // Create image
    img_logo = lv_img_create(scr);
    lv_img_set_src(img_logo, &esp_logo);
    lv_obj_center(img_logo);
    
    // Create new image and make it transparent
    img_text = lv_img_create(scr);
    lv_img_set_src(img_text, &esp_text);
    lv_obj_set_style_img_opa(img_text, 0, 0);
    
    lv_coord_t offset = 0.65f;
    lv_obj_align(img_logo, LV_ALIGN_CENTER, 0, -offset);
    lv_obj_align(img_text, LV_ALIGN_CENTER, 0, 2 * offset);
    lv_obj_set_style_img_opa(img_text, offset / 40.0f * 255, 0);

    // Create arcs
    for (size_t i = 0; i < sizeof(arc) / sizeof(arc[0]); i++) {
        arc[i] = lv_arc_create(scr);

        // Set arc caption
        lv_obj_set_size(arc[i], 220 - 30 * i, 220 - 30 * i);
        lv_arc_set_bg_angles(arc[i], 120 * i, 10 + 120 * i);
        lv_arc_set_value(arc[i], 0);

        // Set arc style
        lv_obj_remove_style(arc[i], NULL, LV_PART_KNOB);
        lv_obj_set_style_arc_width(arc[i], 10, 0);

        // Make arc center
        lv_obj_center(arc[i]);
    }
}
 */

void create_demo_application()
{
    lv_coord_t offset;
    
    // Create image
    img_logo = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(img_logo, &esp_logo);
    lv_obj_align(img_logo, NULL, LV_ALIGN_CENTER, -3, 0);
    lv_img_set_angle(img_logo, 900);

    //lv_obj_clean(lv_scr_act());  //clears the screen
}
