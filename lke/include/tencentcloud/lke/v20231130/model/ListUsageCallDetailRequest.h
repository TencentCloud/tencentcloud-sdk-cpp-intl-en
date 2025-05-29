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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTUSAGECALLDETAILREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTUSAGECALLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListUsageCallDetail request structure.
                */
                class ListUsageCallDetailRequest : public AbstractModel
                {
                public:
                    ListUsageCallDetailRequest();
                    ~ListUsageCallDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Model identifier.
                     * @return ModelName Model identifier.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model identifier.
                     * @param _modelName Model identifier.
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Page number.
                     * @return PageNumber Page number.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number.
                     * @param _pageNumber Page number.
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
                     * 获取Number of items per page.
                     * @return PageSize Number of items per page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page.
                     * @param _pageSize Number of items per page.
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
                     * 获取Uin list.
                     * @return UinAccount Uin list.
                     * 
                     */
                    std::vector<std::string> GetUinAccount() const;

                    /**
                     * 设置Uin list.
                     * @param _uinAccount Uin list.
                     * 
                     */
                    void SetUinAccount(const std::vector<std::string>& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                    /**
                     * 获取Application ID list.
                     * @return AppBizIds Application ID list.
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置Application ID list.
                     * @param _appBizIds Application ID list.
                     * 
                     */
                    void SetAppBizIds(const std::vector<std::string>& _appBizIds);

                    /**
                     * 判断参数 AppBizIds 是否已赋值
                     * @return AppBizIds 是否已赋值
                     * 
                     */
                    bool AppBizIdsHasBeenSet() const;

                    /**
                     * 获取Call type list.
                     * @return CallType Call type list.
                     * 
                     */
                    std::string GetCallType() const;

                    /**
                     * 设置Call type list.
                     * @param _callType Call type list.
                     * 
                     */
                    void SetCallType(const std::string& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取Filter sub-scenario.
                     * @return SubScenes Filter sub-scenario.
                     * 
                     */
                    std::vector<std::string> GetSubScenes() const;

                    /**
                     * 设置Filter sub-scenario.
                     * @param _subScenes Filter sub-scenario.
                     * 
                     */
                    void SetSubScenes(const std::vector<std::string>& _subScenes);

                    /**
                     * 判断参数 SubScenes 是否已赋值
                     * @return SubScenes 是否已赋值
                     * 
                     */
                    bool SubScenesHasBeenSet() const;

                private:

                    /**
                     * Model identifier.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Page number.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Uin list.
                     */
                    std::vector<std::string> m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * Application ID list.
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                    /**
                     * Call type list.
                     */
                    std::string m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * Filter sub-scenario.
                     */
                    std::vector<std::string> m_subScenes;
                    bool m_subScenesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTUSAGECALLDETAILREQUEST_H_
