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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICESREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * GetDevices request structure.
                */
                class GetDevicesRequest : public AbstractModel
                {
                public:
                    GetDevicesRequest();
                    ~GetDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number.
                     * @return PageNum Page number.
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置Page number.
                     * @param _pageNum Page number.
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of pages.
                     * @return PageSize Number of pages.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of pages.
                     * @param _pageSize Number of pages.
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
                     * 获取Project id.
                     * @return ProjectId Project id.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id.
                     * @param _projectId Project id.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Device id.
                     * @return DeviceId Device id.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device id.
                     * @param _deviceId Device id.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * Page number.
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of pages.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Project id.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Device id.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICESREQUEST_H_
