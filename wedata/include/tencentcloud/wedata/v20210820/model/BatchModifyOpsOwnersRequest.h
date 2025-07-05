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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHMODIFYOPSOWNERSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHMODIFYOPSOWNERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchModifyOpsOwners request structure.
                */
                class BatchModifyOpsOwnersRequest : public AbstractModel
                {
                public:
                    BatchModifyOpsOwnersRequest();
                    ~BatchModifyOpsOwnersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TaskId Array that Needs Updated Responsible Person
                     * @return TaskIdList TaskId Array that Needs Updated Responsible Person
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置TaskId Array that Needs Updated Responsible Person
                     * @param _taskIdList TaskId Array that Needs Updated Responsible Person
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取Responsible User Id Information that Needs Updating, Connect Multiple Persons in Charge with ;
                     * @return Owners Responsible User Id Information that Needs Updating, Connect Multiple Persons in Charge with ;
                     * 
                     */
                    std::string GetOwners() const;

                    /**
                     * 设置Responsible User Id Information that Needs Updating, Connect Multiple Persons in Charge with ;
                     * @param _owners Responsible User Id Information that Needs Updating, Connect Multiple Persons in Charge with ;
                     * 
                     */
                    void SetOwners(const std::string& _owners);

                    /**
                     * 判断参数 Owners 是否已赋值
                     * @return Owners 是否已赋值
                     * 
                     */
                    bool OwnersHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * TaskId Array that Needs Updated Responsible Person
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Responsible User Id Information that Needs Updating, Connect Multiple Persons in Charge with ;
                     */
                    std::string m_owners;
                    bool m_ownersHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHMODIFYOPSOWNERSREQUEST_H_
