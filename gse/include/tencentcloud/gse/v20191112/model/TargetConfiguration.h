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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TARGETCONFIGURATION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TARGETCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Configuration of target tracking scaling
                */
                class TargetConfiguration : public AbstractModel
                {
                public:
                    TargetConfiguration();
                    ~TargetConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ratio of reserved server session resource 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetValue Ratio of reserved server session resource 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTargetValue() const;

                    /**
                     * 设置Ratio of reserved server session resource 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TargetValue Ratio of reserved server session resource 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTargetValue(const uint64_t& _targetValue);

                    /**
                     * 判断参数 TargetValue 是否已赋值
                     * @return TargetValue 是否已赋值
                     */
                    bool TargetValueHasBeenSet() const;

                private:

                    /**
                     * Ratio of reserved server session resource 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetValue;
                    bool m_targetValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TARGETCONFIGURATION_H_
