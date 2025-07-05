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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceReleaseHistoryInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Service release history
                */
                class ServiceReleaseHistory : public AbstractModel
                {
                public:
                    ServiceReleaseHistory();
                    ~ServiceReleaseHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of published versions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of published versions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of published versions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total number of published versions.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Historical version list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VersionList Historical version list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServiceReleaseHistoryInfo> GetVersionList() const;

                    /**
                     * 设置Historical version list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _versionList Historical version list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersionList(const std::vector<ServiceReleaseHistoryInfo>& _versionList);

                    /**
                     * 判断参数 VersionList 是否已赋值
                     * @return VersionList 是否已赋值
                     * 
                     */
                    bool VersionListHasBeenSet() const;

                private:

                    /**
                     * Total number of published versions.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Historical version list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceReleaseHistoryInfo> m_versionList;
                    bool m_versionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORY_H_
