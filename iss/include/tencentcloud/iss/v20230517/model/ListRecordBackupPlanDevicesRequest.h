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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDBACKUPPLANDEVICESREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDBACKUPPLANDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListRecordBackupPlanDevices request structure.
                */
                class ListRecordBackupPlanDevicesRequest : public AbstractModel
                {
                public:
                    ListRecordBackupPlanDevicesRequest();
                    ~ListRecordBackupPlanDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Recording schedule ID (obtain from the ListRecordBackupPlans API for querying the recording cloud migration plan list)
                     * @return PlanId Recording schedule ID (obtain from the ListRecordBackupPlans API for querying the recording cloud migration plan list)
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Recording schedule ID (obtain from the ListRecordBackupPlans API for querying the recording cloud migration plan list)
                     * @param _planId Recording schedule ID (obtain from the ListRecordBackupPlans API for querying the recording cloud migration plan list)
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Query by device name (if empty, this parameter is not used for reference)
                     * @return DeviceName Query by device name (if empty, this parameter is not used for reference)
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Query by device name (if empty, this parameter is not used for reference)
                     * @param _deviceName Query by device name (if empty, this parameter is not used for reference)
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Query by channel name (if empty, ignore this parameter)
                     * @return ChannelName Query by channel name (if empty, ignore this parameter)
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Query by channel name (if empty, ignore this parameter)
                     * @param _channelName Query by channel name (if empty, ignore this parameter)
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Query by organization name (if empty, this parameter is not used for reference)
                     * @return OrganizationName Query by organization name (if empty, this parameter is not used for reference)
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置Query by organization name (if empty, this parameter is not used for reference)
                     * @param _organizationName Query by organization name (if empty, this parameter is not used for reference)
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取Maximum number of items per page
                     * @return PageSize Maximum number of items per page
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Maximum number of items per page
                     * @param _pageSize Maximum number of items per page
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * Recording schedule ID (obtain from the ListRecordBackupPlans API for querying the recording cloud migration plan list)
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Query by device name (if empty, this parameter is not used for reference)
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Query by channel name (if empty, ignore this parameter)
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Query by organization name (if empty, this parameter is not used for reference)
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * Maximum number of items per page
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDBACKUPPLANDEVICESREQUEST_H_
