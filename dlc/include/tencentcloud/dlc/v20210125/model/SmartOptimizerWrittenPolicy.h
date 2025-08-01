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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERWRITTENPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERWRITTENPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartOptimizerWrittenPolicy
                */
                class SmartOptimizerWrittenPolicy : public AbstractModel
                {
                public:
                    SmartOptimizerWrittenPolicy();
                    ~SmartOptimizerWrittenPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取none/enable/disable/default
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WrittenEnable none/enable/disable/default
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWrittenEnable() const;

                    /**
                     * 设置none/enable/disable/default
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _writtenEnable none/enable/disable/default
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWrittenEnable(const std::string& _writtenEnable);

                    /**
                     * 判断参数 WrittenEnable 是否已赋值
                     * @return WrittenEnable 是否已赋值
                     * 
                     */
                    bool WrittenEnableHasBeenSet() const;

                private:

                    /**
                     * none/enable/disable/default
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_writtenEnable;
                    bool m_writtenEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERWRITTENPOLICY_H_
