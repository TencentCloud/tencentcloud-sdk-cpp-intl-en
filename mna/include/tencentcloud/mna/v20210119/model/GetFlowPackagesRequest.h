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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowPackages request structure.
                */
                class GetFlowPackagesRequest : public AbstractModel
                {
                public:
                    GetFlowPackagesRequest();
                    ~GetFlowPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, starting from 1.
                     * @return PageNumber Page number, starting from 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, starting from 1.
                     * @param _pageNumber Page number, starting from 1.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of Entry Per Page
                     * @return PageSize Number of Entry Per Page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of Entry Per Page
                     * @param _pageSize Number of Entry Per Page
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Unique resource ID of the data transfer plan
                     * @return ResourceId Unique resource ID of the data transfer plan
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Unique resource ID of the data transfer plan
                     * @param _resourceId Unique resource ID of the data transfer plan
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Device ID bound to the data transfer plan
                     * @return DeviceId Device ID bound to the data transfer plan
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID bound to the data transfer plan
                     * @param _deviceId Device ID bound to the data transfer plan
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Traffic packet status. 0: Not in effect, 1: Within the validity period, 2: Expired.

                     * @return Status Traffic packet status. 0: Not in effect, 1: Within the validity period, 2: Expired.

                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Traffic packet status. 0: Not in effect, 1: Within the validity period, 2: Expired.

                     * @param _status Traffic packet status. 0: Not in effect, 1: Within the validity period, 2: Expired.

                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Page number, starting from 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of Entry Per Page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Unique resource ID of the data transfer plan
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Device ID bound to the data transfer plan
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Traffic packet status. 0: Not in effect, 1: Within the validity period, 2: Expired.

                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESREQUEST_H_
