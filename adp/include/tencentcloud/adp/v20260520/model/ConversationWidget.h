/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWIDGET_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWIDGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Widget component content information
                */
                class ConversationWidget : public AbstractModel
                {
                public:
                    ConversationWidget();
                    ~ConversationWidget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Base64-encoded original widget data</p>
                     * @return EncodedWidget <p>Base64-encoded original widget data</p>
                     * 
                     */
                    std::string GetEncodedWidget() const;

                    /**
                     * 设置<p>Base64-encoded original widget data</p>
                     * @param _encodedWidget <p>Base64-encoded original widget data</p>
                     * 
                     */
                    void SetEncodedWidget(const std::string& _encodedWidget);

                    /**
                     * 判断参数 EncodedWidget 是否已赋值
                     * @return EncodedWidget 是否已赋值
                     * 
                     */
                    bool EncodedWidgetHasBeenSet() const;

                    /**
                     * 获取<p>payload from the user's last submission</p>
                     * @return Payload <p>payload from the user's last submission</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>payload from the user's last submission</p>
                     * @param _payload <p>payload from the user's last submission</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>Location of the widget in the text</p>
                     * @return Position <p>Location of the widget in the text</p>
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置<p>Location of the widget in the text</p>
                     * @param _position <p>Location of the widget in the text</p>
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取<p>widget status JSON data</p>
                     * @return State <p>widget status JSON data</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>widget status JSON data</p>
                     * @param _state <p>widget status JSON data</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>widget view data</p>
                     * @return View <p>widget view data</p>
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置<p>widget view data</p>
                     * @param _view <p>widget view data</p>
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取<p>component_ID</p>
                     * @return WidgetId <p>component_ID</p>
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置<p>component_ID</p>
                     * @param _widgetId <p>component_ID</p>
                     * 
                     */
                    void SetWidgetId(const std::string& _widgetId);

                    /**
                     * 判断参数 WidgetId 是否已赋值
                     * @return WidgetId 是否已赋值
                     * 
                     */
                    bool WidgetIdHasBeenSet() const;

                    /**
                     * 获取<p>Component operation ID</p>
                     * @return WidgetRunId <p>Component operation ID</p>
                     * 
                     */
                    std::string GetWidgetRunId() const;

                    /**
                     * 设置<p>Component operation ID</p>
                     * @param _widgetRunId <p>Component operation ID</p>
                     * 
                     */
                    void SetWidgetRunId(const std::string& _widgetRunId);

                    /**
                     * 判断参数 WidgetRunId 是否已赋值
                     * @return WidgetRunId 是否已赋值
                     * 
                     */
                    bool WidgetRunIdHasBeenSet() const;

                private:

                    /**
                     * <p>Base64-encoded original widget data</p>
                     */
                    std::string m_encodedWidget;
                    bool m_encodedWidgetHasBeenSet;

                    /**
                     * <p>payload from the user's last submission</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>Location of the widget in the text</p>
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * <p>widget status JSON data</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>widget view data</p>
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * <p>component_ID</p>
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                    /**
                     * <p>Component operation ID</p>
                     */
                    std::string m_widgetRunId;
                    bool m_widgetRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWIDGET_H_
