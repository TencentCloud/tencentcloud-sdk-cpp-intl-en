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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TSEINSTANCELIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TSEINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TSEInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * TSE instance details - asynchronously associated cloud resource data structure
                */
                class TSEInstanceList : public AbstractModel
                {
                public:
                    TSEInstanceList();
                    ~TSEInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TSE instance details
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceList TSE instance details
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TSEInstanceDetail> GetInstanceList() const;

                    /**
                     * 设置TSE instance details
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceList TSE instance details
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceList(const std::vector<TSEInstanceDetail>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取Total TSE instances in this region	
                     * @return TotalCount Total TSE instances in this region	
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total TSE instances in this region	
                     * @param _totalCount Total TSE instances in this region	
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Region	
                     * @return Region Region	
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region	
                     * @param _region Region	
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Whether to query exceptions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Error Whether to query exceptions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置Whether to query exceptions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _error Whether to query exceptions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * TSE instance details
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TSEInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * Total TSE instances in this region	
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Region	
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Whether to query exceptions.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TSEINSTANCELIST_H_
