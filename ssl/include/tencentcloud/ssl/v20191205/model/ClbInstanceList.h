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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CLBINSTANCELIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CLBINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ClbInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of CLB instances - data structure of an async task for querying associated cloud resources
                */
                class ClbInstanceList : public AbstractModel
                {
                public:
                    ClbInstanceList();
                    ~ClbInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The region.
                     * @return Region The region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region.
                     * @param _region The region.
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
                     * 获取CLB instance details.
                     * @return InstanceList CLB instance details.
                     * 
                     */
                    std::vector<ClbInstanceDetail> GetInstanceList() const;

                    /**
                     * 设置CLB instance details.
                     * @param _instanceList CLB instance details.
                     * 
                     */
                    void SetInstanceList(const std::vector<ClbInstanceDetail>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取The total number of CLB instances in this region.
                     * @return TotalCount The total number of CLB instances in this region.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置The total number of CLB instances in this region.
                     * @param _totalCount The total number of CLB instances in this region.
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
                     * 获取Whether to query exceptions.
                     * @return Error Whether to query exceptions.
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置Whether to query exceptions.
                     * @param _error Whether to query exceptions.
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
                     * The region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CLB instance details.
                     */
                    std::vector<ClbInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * The total number of CLB instances in this region.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Whether to query exceptions.
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CLBINSTANCELIST_H_
