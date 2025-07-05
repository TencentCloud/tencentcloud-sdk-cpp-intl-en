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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCELIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/LiveInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of LIVE instances - data structure of an async task for querying associated cloud resources
                */
                class LiveInstanceList : public AbstractModel
                {
                public:
                    LiveInstanceList();
                    ~LiveInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The total number of LIVE instances in this region.	
                     * @return TotalCount The total number of LIVE instances in this region.	
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置The total number of LIVE instances in this region.	
                     * @param _totalCount The total number of LIVE instances in this region.	
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
                     * 获取The list of LIVE instances.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceList The list of LIVE instances.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LiveInstanceDetail> GetInstanceList() const;

                    /**
                     * 设置The list of LIVE instances.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceList The list of LIVE instances.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceList(const std::vector<LiveInstanceDetail>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

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
                     * The total number of LIVE instances in this region.	
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The list of LIVE instances.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LiveInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

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

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCELIST_H_
