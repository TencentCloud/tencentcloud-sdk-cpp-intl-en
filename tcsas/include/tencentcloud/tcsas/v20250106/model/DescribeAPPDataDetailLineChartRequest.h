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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPDATADETAILLINECHARTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPDATADETAILLINECHARTREQUEST_H_

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
                * DescribeAPPDataDetailLineChart request structure.
                */
                class DescribeAPPDataDetailLineChartRequest : public AbstractModel
                {
                public:
                    DescribeAPPDataDetailLineChartRequest();
                    ~DescribeAPPDataDetailLineChartRequest() = default;
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
                     * 获取Fixed value: mnp_data_analysis
                     * @return ReportId Fixed value: mnp_data_analysis
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置Fixed value: mnp_data_analysis
                     * @param _reportId Fixed value: mnp_data_analysis
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取IndexId (optional):
app_minigame_num: Number of created mini games
app_online_miniapp_num: Number of available mini programs
app_miniapp_num: Number of created mini programs
app_related_corp_num: Mini program team data
app_online_minigame_num: Number of available mini games
app_active_device_num: Number of active devices
app_new_device_num: Number of new devices
                     * @return IndexIds IndexId (optional):
app_minigame_num: Number of created mini games
app_online_miniapp_num: Number of available mini programs
app_miniapp_num: Number of created mini programs
app_related_corp_num: Mini program team data
app_online_minigame_num: Number of available mini games
app_active_device_num: Number of active devices
app_new_device_num: Number of new devices
                     * 
                     */
                    std::vector<std::string> GetIndexIds() const;

                    /**
                     * 设置IndexId (optional):
app_minigame_num: Number of created mini games
app_online_miniapp_num: Number of available mini programs
app_miniapp_num: Number of created mini programs
app_related_corp_num: Mini program team data
app_online_minigame_num: Number of available mini games
app_active_device_num: Number of active devices
app_new_device_num: Number of new devices
                     * @param _indexIds IndexId (optional):
app_minigame_num: Number of created mini games
app_online_miniapp_num: Number of available mini programs
app_miniapp_num: Number of created mini programs
app_related_corp_num: Mini program team data
app_online_minigame_num: Number of available mini games
app_active_device_num: Number of active devices
app_new_device_num: Number of new devices
                     * 
                     */
                    void SetIndexIds(const std::vector<std::string>& _indexIds);

                    /**
                     * 判断参数 IndexIds 是否已赋值
                     * @return IndexIds 是否已赋值
                     * 
                     */
                    bool IndexIdsHasBeenSet() const;

                    /**
                     * 获取Input parameter base64 string: {"BeginDate":"20251122","EndDate":"20251128"}
                     * @return QueryData Input parameter base64 string: {"BeginDate":"20251122","EndDate":"20251128"}
                     * 
                     */
                    std::string GetQueryData() const;

                    /**
                     * 设置Input parameter base64 string: {"BeginDate":"20251122","EndDate":"20251128"}
                     * @param _queryData Input parameter base64 string: {"BeginDate":"20251122","EndDate":"20251128"}
                     * 
                     */
                    void SetQueryData(const std::string& _queryData);

                    /**
                     * 判断参数 QueryData 是否已赋值
                     * @return QueryData 是否已赋值
                     * 
                     */
                    bool QueryDataHasBeenSet() const;

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
                     * Fixed value: mnp_data_analysis
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * IndexId (optional):
app_minigame_num: Number of created mini games
app_online_miniapp_num: Number of available mini programs
app_miniapp_num: Number of created mini programs
app_related_corp_num: Mini program team data
app_online_minigame_num: Number of available mini games
app_active_device_num: Number of active devices
app_new_device_num: Number of new devices
                     */
                    std::vector<std::string> m_indexIds;
                    bool m_indexIdsHasBeenSet;

                    /**
                     * Input parameter base64 string: {"BeginDate":"20251122","EndDate":"20251128"}
                     */
                    std::string m_queryData;
                    bool m_queryDataHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPDATADETAILLINECHARTREQUEST_H_
