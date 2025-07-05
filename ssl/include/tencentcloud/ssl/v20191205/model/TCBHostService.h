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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBHOSTSERVICE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBHOSTSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TCBHostInstance.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * List of TCB services subject to static hosting
                */
                class TCBHostService : public AbstractModel
                {
                public:
                    TCBHostService();
                    ~TCBHostService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The list of instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceList The list of instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TCBHostInstance> GetInstanceList() const;

                    /**
                     * 设置The list of instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceList The list of instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceList(const std::vector<TCBHostInstance>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取The instance count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount The instance count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置The instance count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount The instance count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * The list of instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TCBHostInstance> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * The instance count.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBHOSTSERVICE_H_
