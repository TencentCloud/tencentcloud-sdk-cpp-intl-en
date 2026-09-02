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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMIDENTIFYLEVELGROUPREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMIDENTIFYLEVELGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAddIdentifyLevelItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmIdentifyLevelGroup request structure.
                */
                class CreateDspmIdentifyLevelGroupRequest : public AbstractModel
                {
                public:
                    CreateDspmIdentifyLevelGroupRequest();
                    ~CreateDspmIdentifyLevelGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Hierarchy group name</p>
                     * @return Name <p>Hierarchy group name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Hierarchy group name</p>
                     * @param _name <p>Hierarchy group name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>None</p>
                     * @return LevelItems <p>None</p>
                     * 
                     */
                    std::vector<DspmAddIdentifyLevelItem> GetLevelItems() const;

                    /**
                     * 设置<p>None</p>
                     * @param _levelItems <p>None</p>
                     * 
                     */
                    void SetLevelItems(const std::vector<DspmAddIdentifyLevelItem>& _levelItems);

                    /**
                     * 判断参数 LevelItems 是否已赋值
                     * @return LevelItems 是否已赋值
                     * 
                     */
                    bool LevelItemsHasBeenSet() const;

                    /**
                     * 获取<p>Operation source: empty/dspm=Database risk monitoring entry, cos=Object storage risk monitoring entry</p>
                     * @return OperationSource <p>Operation source: empty/dspm=Database risk monitoring entry, cos=Object storage risk monitoring entry</p>
                     * 
                     */
                    std::string GetOperationSource() const;

                    /**
                     * 设置<p>Operation source: empty/dspm=Database risk monitoring entry, cos=Object storage risk monitoring entry</p>
                     * @param _operationSource <p>Operation source: empty/dspm=Database risk monitoring entry, cos=Object storage risk monitoring entry</p>
                     * 
                     */
                    void SetOperationSource(const std::string& _operationSource);

                    /**
                     * 判断参数 OperationSource 是否已赋值
                     * @return OperationSource 是否已赋值
                     * 
                     */
                    bool OperationSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Hierarchy group name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>None</p>
                     */
                    std::vector<DspmAddIdentifyLevelItem> m_levelItems;
                    bool m_levelItemsHasBeenSet;

                    /**
                     * <p>Operation source: empty/dspm=Database risk monitoring entry, cos=Object storage risk monitoring entry</p>
                     */
                    std::string m_operationSource;
                    bool m_operationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMIDENTIFYLEVELGROUPREQUEST_H_
