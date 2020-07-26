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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_

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
                * CreateDeployGroup request structure.
                */
                class CreateDeployGroupRequest : public AbstractModel
                {
                public:
                    CreateDeployGroupRequest();
                    ~CreateDeployGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of a placement group, which can contain up to 60 characters.
                     * @return DeployGroupName Name of a placement group, which can contain up to 60 characters.
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置Name of a placement group, which can contain up to 60 characters.
                     * @param DeployGroupName Name of a placement group, which can contain up to 60 characters.
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取Description of a placement group, which can contain up to 200 characters.
                     * @return Description Description of a placement group, which can contain up to 200 characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of a placement group, which can contain up to 200 characters.
                     * @param Description Description of a placement group, which can contain up to 200 characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Affinity policy of placement group. Currently, the value of this parameter can only be 1. Policy 1 indicates the upper limit of instances on one physical machine.
                     * @return Affinity Affinity policy of placement group. Currently, the value of this parameter can only be 1. Policy 1 indicates the upper limit of instances on one physical machine.
                     */
                    std::vector<int64_t> GetAffinity() const;

                    /**
                     * 设置Affinity policy of placement group. Currently, the value of this parameter can only be 1. Policy 1 indicates the upper limit of instances on one physical machine.
                     * @param Affinity Affinity policy of placement group. Currently, the value of this parameter can only be 1. Policy 1 indicates the upper limit of instances on one physical machine.
                     */
                    void SetAffinity(const std::vector<int64_t>& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取Upper limit of instances on one physical machine as defined in affinity policy 1 of placement group.
                     * @return LimitNum Upper limit of instances on one physical machine as defined in affinity policy 1 of placement group.
                     */
                    int64_t GetLimitNum() const;

                    /**
                     * 设置Upper limit of instances on one physical machine as defined in affinity policy 1 of placement group.
                     * @param LimitNum Upper limit of instances on one physical machine as defined in affinity policy 1 of placement group.
                     */
                    void SetLimitNum(const int64_t& _limitNum);

                    /**
                     * 判断参数 LimitNum 是否已赋值
                     * @return LimitNum 是否已赋值
                     */
                    bool LimitNumHasBeenSet() const;

                    /**
                     * 获取Model attribute of placement group. Valid values: SH12+SH02, TS85.
                     * @return DevClass Model attribute of placement group. Valid values: SH12+SH02, TS85.
                     */
                    std::vector<std::string> GetDevClass() const;

                    /**
                     * 设置Model attribute of placement group. Valid values: SH12+SH02, TS85.
                     * @param DevClass Model attribute of placement group. Valid values: SH12+SH02, TS85.
                     */
                    void SetDevClass(const std::vector<std::string>& _devClass);

                    /**
                     * 判断参数 DevClass 是否已赋值
                     * @return DevClass 是否已赋值
                     */
                    bool DevClassHasBeenSet() const;

                private:

                    /**
                     * Name of a placement group, which can contain up to 60 characters.
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * Description of a placement group, which can contain up to 200 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Affinity policy of placement group. Currently, the value of this parameter can only be 1. Policy 1 indicates the upper limit of instances on one physical machine.
                     */
                    std::vector<int64_t> m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * Upper limit of instances on one physical machine as defined in affinity policy 1 of placement group.
                     */
                    int64_t m_limitNum;
                    bool m_limitNumHasBeenSet;

                    /**
                     * Model attribute of placement group. Valid values: SH12+SH02, TS85.
                     */
                    std::vector<std::string> m_devClass;
                    bool m_devClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_
