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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CERTSORT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CERTSORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Sorting conditions for query results.
                */
                class CertSort : public AbstractModel
                {
                public:
                    CertSort();
                    ~CertSort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fields that can be sorted. Values:
`createTime`: Domain name creation time
`certExpireTime`: Certificate expiration time
`certDeployTime`: Certificate deployment time
                     * @return Key Fields that can be sorted. Values:
`createTime`: Domain name creation time
`certExpireTime`: Certificate expiration time
`certDeployTime`: Certificate deployment time
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Fields that can be sorted. Values:
`createTime`: Domain name creation time
`certExpireTime`: Certificate expiration time
`certDeployTime`: Certificate deployment time
                     * @param _key Fields that can be sorted. Values:
`createTime`: Domain name creation time
`certExpireTime`: Certificate expiration time
`certDeployTime`: Certificate deployment time
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc` and `desc` (default).
                     * @return Sequence Sorting order. Valid values: `asc` and `desc` (default).
                     * 
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置Sorting order. Valid values: `asc` and `desc` (default).
                     * @param _sequence Sorting order. Valid values: `asc` and `desc` (default).
                     * 
                     */
                    void SetSequence(const std::string& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                private:

                    /**
                     * Fields that can be sorted. Values:
`createTime`: Domain name creation time
`certExpireTime`: Certificate expiration time
`certDeployTime`: Certificate deployment time
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc` and `desc` (default).
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CERTSORT_H_
