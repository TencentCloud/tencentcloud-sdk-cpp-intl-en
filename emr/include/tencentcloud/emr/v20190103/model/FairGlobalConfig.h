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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_FAIRGLOBALCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_FAIRGLOBALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Global configurations of the fair scheduler under Resource Scheduling.
                */
                class FairGlobalConfig : public AbstractModel
                {
                public:
                    FairGlobalConfig();
                    ~FairGlobalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Corresponds to <p>Program Upper Limit</p> of the page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserMaxAppsDefault Corresponds to <p>Program Upper Limit</p> of the page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUserMaxAppsDefault() const;

                    /**
                     * 设置Corresponds to <p>Program Upper Limit</p> of the page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userMaxAppsDefault Corresponds to <p>Program Upper Limit</p> of the page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserMaxAppsDefault(const int64_t& _userMaxAppsDefault);

                    /**
                     * 判断参数 UserMaxAppsDefault 是否已赋值
                     * @return UserMaxAppsDefault 是否已赋值
                     * 
                     */
                    bool UserMaxAppsDefaultHasBeenSet() const;

                private:

                    /**
                     * Corresponds to <p>Program Upper Limit</p> of the page.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_userMaxAppsDefault;
                    bool m_userMaxAppsDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_FAIRGLOBALCONFIG_H_
