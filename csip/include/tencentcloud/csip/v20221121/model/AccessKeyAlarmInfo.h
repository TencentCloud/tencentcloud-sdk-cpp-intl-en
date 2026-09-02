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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Access key asset alarm information
                */
                class AccessKeyAlarmInfo : public AbstractModel
                {
                public:
                    AccessKeyAlarmInfo();
                    ~AccessKeyAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm type/Risk type
Alarm type:
0Abnormal calls
1. Leakage detection
Custom parameter 2.

Risk type:
0: Configuration risk
1: Custom risk
                     * @return Type Alarm type/Risk type
Alarm type:
0Abnormal calls
1. Leakage detection
Custom parameter 2.

Risk type:
0: Configuration risk
1: Custom risk
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Alarm type/Risk type
Alarm type:
0Abnormal calls
1. Leakage detection
Custom parameter 2.

Risk type:
0: Configuration risk
1: Custom risk
                     * @param _type Alarm type/Risk type
Alarm type:
0Abnormal calls
1. Leakage detection
Custom parameter 2.

Risk type:
0: Configuration risk
1: Custom risk
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Alarm count / risk quantity
                     * @return Count Alarm count / risk quantity
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Alarm count / risk quantity
                     * @param _count Alarm count / risk quantity
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Alarm type/Risk type
Alarm type:
0Abnormal calls
1. Leakage detection
Custom parameter 2.

Risk type:
0: Configuration risk
1: Custom risk
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm count / risk quantity
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMINFO_H_
