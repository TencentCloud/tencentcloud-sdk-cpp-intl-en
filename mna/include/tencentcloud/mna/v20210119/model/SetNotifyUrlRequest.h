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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_SETNOTIFYURLREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_SETNOTIFYURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * SetNotifyUrl request structure.
                */
                class SetNotifyUrlRequest : public AbstractModel
                {
                public:
                    SetNotifyUrlRequest();
                    ~SetNotifyUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm notification callback url
                     * @return NotifyUrl Alarm notification callback url
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置Alarm notification callback url
                     * @param _notifyUrl Alarm notification callback url
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取Alarm notification callback key
                     * @return CallbackKey Alarm notification callback key
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置Alarm notification callback key
                     * @param _callbackKey Alarm notification callback key
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取Alarm threshold of the data transfer plan
                     * @return AlarmValue Alarm threshold of the data transfer plan
                     * 
                     */
                    int64_t GetAlarmValue() const;

                    /**
                     * 设置Alarm threshold of the data transfer plan
                     * @param _alarmValue Alarm threshold of the data transfer plan
                     * 
                     */
                    void SetAlarmValue(const int64_t& _alarmValue);

                    /**
                     * 判断参数 AlarmValue 是否已赋值
                     * @return AlarmValue 是否已赋值
                     * 
                     */
                    bool AlarmValueHasBeenSet() const;

                private:

                    /**
                     * Alarm notification callback url
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * Alarm notification callback key
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * Alarm threshold of the data transfer plan
                     */
                    int64_t m_alarmValue;
                    bool m_alarmValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_SETNOTIFYURLREQUEST_H_
