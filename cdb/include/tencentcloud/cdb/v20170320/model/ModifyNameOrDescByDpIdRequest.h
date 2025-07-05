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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYNAMEORDESCBYDPIDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYNAMEORDESCBYDPIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyNameOrDescByDpId request structure.
                */
                class ModifyNameOrDescByDpIdRequest : public AbstractModel
                {
                public:
                    ModifyNameOrDescByDpIdRequest();
                    ~ModifyNameOrDescByDpIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Placement group ID
                     * @return DeployGroupId Placement group ID
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置Placement group ID
                     * @param _deployGroupId Placement group ID
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取Name of a placement group, which can contain up to 60 characters. The placement group name and description can’t be empty.
                     * @return DeployGroupName Name of a placement group, which can contain up to 60 characters. The placement group name and description can’t be empty.
                     * 
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置Name of a placement group, which can contain up to 60 characters. The placement group name and description can’t be empty.
                     * @param _deployGroupName Name of a placement group, which can contain up to 60 characters. The placement group name and description can’t be empty.
                     * 
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     * 
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取Description of a placement group, which can contain up to 200 characters. The placement group name and description can’t be empty.
                     * @return Description Description of a placement group, which can contain up to 200 characters. The placement group name and description can’t be empty.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of a placement group, which can contain up to 200 characters. The placement group name and description can’t be empty.
                     * @param _description Description of a placement group, which can contain up to 200 characters. The placement group name and description can’t be empty.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Placement group ID
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * Name of a placement group, which can contain up to 60 characters. The placement group name and description can’t be empty.
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * Description of a placement group, which can contain up to 200 characters. The placement group name and description can’t be empty.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYNAMEORDESCBYDPIDREQUEST_H_
