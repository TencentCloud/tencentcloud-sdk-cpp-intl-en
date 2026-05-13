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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WIDGET_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WIDGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 
                */
                class Widget : public AbstractModel
                {
                public:
                    Widget();
                    ~Widget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return WidgetId 
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置
                     * @param _widgetId 
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
                     * 获取
                     * @return WidgetRunId 
                     * 
                     */
                    std::string GetWidgetRunId() const;

                    /**
                     * 设置
                     * @param _widgetRunId 
                     * 
                     */
                    void SetWidgetRunId(const std::string& _widgetRunId);

                    /**
                     * 判断参数 WidgetRunId 是否已赋值
                     * @return WidgetRunId 是否已赋值
                     * 
                     */
                    bool WidgetRunIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return View 
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置
                     * @param _view 
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
                     * 获取
                     * @return State 
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置
                     * @param _state 
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
                     * 获取
                     * @return Position 
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置
                     * @param _position 
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
                     * 获取
                     * @return EncodedWidget 
                     * 
                     */
                    std::string GetEncodedWidget() const;

                    /**
                     * 设置
                     * @param _encodedWidget 
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
                     * 获取
                     * @return Payload 
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置
                     * @param _payload 
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_widgetRunId;
                    bool m_widgetRunIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_encodedWidget;
                    bool m_encodedWidgetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WIDGET_H_
