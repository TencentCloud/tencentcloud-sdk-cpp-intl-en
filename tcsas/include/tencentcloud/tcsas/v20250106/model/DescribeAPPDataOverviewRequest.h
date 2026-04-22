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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPDATAOVERVIEWREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPDATAOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeAPPDataOverview request structure.
                */
                class DescribeAPPDataOverviewRequest : public AbstractModel
                {
                public:
                    DescribeAPPDataOverviewRequest();
                    ~DescribeAPPDataOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tenant ID
                     * @return PlatformId Tenant ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Tenant ID
                     * @param _platformId Tenant ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Start time in YYYYMMDD format
                     * @return DataTime Start time in YYYYMMDD format
                     * 
                     */
                    int64_t GetDataTime() const;

                    /**
                     * 设置Start time in YYYYMMDD format
                     * @param _dataTime Start time in YYYYMMDD format
                     * 
                     */
                    void SetDataTime(const int64_t& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                    /**
                     * 获取Superapp ID
                     * @return ApplicationIds Superapp ID
                     * 
                     */
                    std::vector<std::string> GetApplicationIds() const;

                    /**
                     * 设置Superapp ID
                     * @param _applicationIds Superapp ID
                     * 
                     */
                    void SetApplicationIds(const std::vector<std::string>& _applicationIds);

                    /**
                     * 判断参数 ApplicationIds 是否已赋值
                     * @return ApplicationIds 是否已赋值
                     * 
                     */
                    bool ApplicationIdsHasBeenSet() const;

                private:

                    /**
                     * Tenant ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Start time in YYYYMMDD format
                     */
                    int64_t m_dataTime;
                    bool m_dataTimeHasBeenSet;

                    /**
                     * Superapp ID
                     */
                    std::vector<std::string> m_applicationIds;
                    bool m_applicationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPDATAOVERVIEWREQUEST_H_
