/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_PUSHEVENTSETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_PUSHEVENTSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * The callback configuration for push events.
                */
                class PushEventSetting : public AbstractModel
                {
                public:
                    PushEventSetting();
                    ~PushEventSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The callback URL (required).
                     * @return NotifyUrl The callback URL (required).
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置The callback URL (required).
                     * @param NotifyUrl The callback URL (required).
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取The callback key (optional).
                     * @return NotifyKey The callback key (optional).
                     */
                    std::string GetNotifyKey() const;

                    /**
                     * 设置The callback key (optional).
                     * @param NotifyKey The callback key (optional).
                     */
                    void SetNotifyKey(const std::string& _notifyKey);

                    /**
                     * 判断参数 NotifyKey 是否已赋值
                     * @return NotifyKey 是否已赋值
                     */
                    bool NotifyKeyHasBeenSet() const;

                private:

                    /**
                     * The callback URL (required).
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * The callback key (optional).
                     */
                    std::string m_notifyKey;
                    bool m_notifyKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PUSHEVENTSETTING_H_
