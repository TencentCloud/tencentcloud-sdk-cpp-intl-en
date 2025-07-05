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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Detail field of the Instance table
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the alarm policy is available	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableAlarmStrategy Whether the alarm policy is available	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableAlarmStrategy() const;

                    /**
                     * 设置Whether the alarm policy is available	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableAlarmStrategy Whether the alarm policy is available	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableAlarmStrategy(const bool& _enableAlarmStrategy);

                    /**
                     * 判断参数 EnableAlarmStrategy 是否已赋值
                     * @return EnableAlarmStrategy 是否已赋值
                     * 
                     */
                    bool EnableAlarmStrategyHasBeenSet() const;

                private:

                    /**
                     * Whether the alarm policy is available	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableAlarmStrategy;
                    bool m_enableAlarmStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEDETAIL_H_
