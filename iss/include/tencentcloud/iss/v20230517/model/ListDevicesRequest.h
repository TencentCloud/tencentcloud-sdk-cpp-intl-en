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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESREQUEST_H_

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
                * ListDevices request structure.
                */
                class ListDevicesRequest : public AbstractModel
                {
                public:
                    ListDevicesRequest();
                    ~ListDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization ID
                     * @return OrganizationId Organization ID
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置Organization ID
                     * @param _organizationId Organization ID
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取Whether to obtain the device list of the current level and sub-levels. Default value: false.
                     * @return IsContainSubLevel Whether to obtain the device list of the current level and sub-levels. Default value: false.
                     * 
                     */
                    bool GetIsContainSubLevel() const;

                    /**
                     * 设置Whether to obtain the device list of the current level and sub-levels. Default value: false.
                     * @param _isContainSubLevel Whether to obtain the device list of the current level and sub-levels. Default value: false.
                     * 
                     */
                    void SetIsContainSubLevel(const bool& _isContainSubLevel);

                    /**
                     * 判断参数 IsContainSubLevel 是否已赋值
                     * @return IsContainSubLevel 是否已赋值
                     * 
                     */
                    bool IsContainSubLevelHasBeenSet() const;

                    /**
                     * 获取Whether the devices already associated with the current user are included. Default value: false.
                     * @return IsContainUser Whether the devices already associated with the current user are included. Default value: false.
                     * 
                     */
                    bool GetIsContainUser() const;

                    /**
                     * 设置Whether the devices already associated with the current user are included. Default value: false.
                     * @param _isContainUser Whether the devices already associated with the current user are included. Default value: false.
                     * 
                     */
                    void SetIsContainUser(const bool& _isContainUser);

                    /**
                     * 判断参数 IsContainUser 是否已赋值
                     * @return IsContainUser 是否已赋值
                     * 
                     */
                    bool IsContainUserHasBeenSet() const;

                    /**
                     * 获取Device access protocol. 1: RTMP, 2: GB, 3: GW, 4: IVCP (private protocol)
                     * @return AccessProtocol Device access protocol. 1: RTMP, 2: GB, 3: GW, 4: IVCP (private protocol)
                     * 
                     */
                    uint64_t GetAccessProtocol() const;

                    /**
                     * 设置Device access protocol. 1: RTMP, 2: GB, 3: GW, 4: IVCP (private protocol)
                     * @param _accessProtocol Device access protocol. 1: RTMP, 2: GB, 3: GW, 4: IVCP (private protocol)
                     * 
                     */
                    void SetAccessProtocol(const uint64_t& _accessProtocol);

                    /**
                     * 判断参数 AccessProtocol 是否已赋值
                     * @return AccessProtocol 是否已赋值
                     * 
                     */
                    bool AccessProtocolHasBeenSet() const;

                    /**
                     * 获取Device type. 1: IPC, 2: NVR
                     * @return Type Device type. 1: IPC, 2: NVR
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Device type. 1: IPC, 2: NVR
                     * @param _type Device type. 1: IPC, 2: NVR
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Device status. 0: unregistered; 1: online; 2: offline; 3: disabled.	
                     * @return Status Device status. 0: unregistered; 1: online; 2: offline; 3: disabled.	
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Device status. 0: unregistered; 1: online; 2: offline; 3: disabled.	
                     * @param _status Device status. 0: unregistered; 1: online; 2: offline; 3: disabled.	
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Service node ID
                     * @return ClusterId Service node ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Service node ID
                     * @param _clusterId Service node ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Keyword for fuzzy search of devices
                     * @return Keyword Keyword for fuzzy search of devices
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword for fuzzy search of devices
                     * @param _keyword Keyword for fuzzy search of devices
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Uin of the current user
                     * @return CurrentUin Uin of the current user
                     * 
                     */
                    uint64_t GetCurrentUin() const;

                    /**
                     * 设置Uin of the current user
                     * @param _currentUin Uin of the current user
                     * 
                     */
                    void SetCurrentUin(const uint64_t& _currentUin);

                    /**
                     * 判断参数 CurrentUin 是否已赋值
                     * @return CurrentUin 是否已赋值
                     * 
                     */
                    bool CurrentUinHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: 1.
                     * @return PageNumber Page number. Default value: 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number. Default value: 1.
                     * @param _pageNumber Page number. Default value: 1.
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
                     * 获取Number of items per page. Default value: 20. Maximum: 10000 per page.
                     * @return PageSize Number of items per page. Default value: 20. Maximum: 10000 per page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. Default value: 20. Maximum: 10000 per page.
                     * @param _pageSize Number of items per page. Default value: 20. Maximum: 10000 per page.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Organization ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * Whether to obtain the device list of the current level and sub-levels. Default value: false.
                     */
                    bool m_isContainSubLevel;
                    bool m_isContainSubLevelHasBeenSet;

                    /**
                     * Whether the devices already associated with the current user are included. Default value: false.
                     */
                    bool m_isContainUser;
                    bool m_isContainUserHasBeenSet;

                    /**
                     * Device access protocol. 1: RTMP, 2: GB, 3: GW, 4: IVCP (private protocol)
                     */
                    uint64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * Device type. 1: IPC, 2: NVR
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Device status. 0: unregistered; 1: online; 2: offline; 3: disabled.	
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Service node ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Keyword for fuzzy search of devices
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Uin of the current user
                     */
                    uint64_t m_currentUin;
                    bool m_currentUinHasBeenSet;

                    /**
                     * Page number. Default value: 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page. Default value: 20. Maximum: 10000 per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESREQUEST_H_
