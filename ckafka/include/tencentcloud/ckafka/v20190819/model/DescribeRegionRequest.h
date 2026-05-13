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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeRegion request structure.
                */
                class DescribeRegionRequest : public AbstractModel
                {
                public:
                    DescribeRegionRequest();
                    ~DescribeRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Offset</p>
                     * @return Offset <p>Offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset</p>
                     * @param _offset <p>Offset</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Return the maximum number of results</p>
                     * @return Limit <p>Return the maximum number of results</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Return the maximum number of results</p>
                     * @param _limit <p>Return the maximum number of results</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Business field, can be ignored</p><p>Enumeration value:</p><ul><li>ckafka: CKafka business</li><li>cmq: CMQ business</li></ul><p>Default value: ckafka</p>
                     * @return Business <p>Business field, can be ignored</p><p>Enumeration value:</p><ul><li>ckafka: CKafka business</li><li>cmq: CMQ business</li></ul><p>Default value: ckafka</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>Business field, can be ignored</p><p>Enumeration value:</p><ul><li>ckafka: CKafka business</li><li>cmq: CMQ business</li></ul><p>Default value: ckafka</p>
                     * @param _business <p>Business field, can be ignored</p><p>Enumeration value:</p><ul><li>ckafka: CKafka business</li><li>cmq: CMQ business</li></ul><p>Default value: ckafka</p>
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>cdc dedicated cluster business field, can be ignored</p>
                     * @return CdcId <p>cdc dedicated cluster business field, can be ignored</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdc dedicated cluster business field, can be ignored</p>
                     * @param _cdcId <p>cdc dedicated cluster business field, can be ignored</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * <p>Offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Return the maximum number of results</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Business field, can be ignored</p><p>Enumeration value:</p><ul><li>ckafka: CKafka business</li><li>cmq: CMQ business</li></ul><p>Default value: ckafka</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>cdc dedicated cluster business field, can be ignored</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_
