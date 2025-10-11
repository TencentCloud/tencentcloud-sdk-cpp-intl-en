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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGESOURCEREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/SourcePackageConf.h>
#include <tencentcloud/mdp/v20200527/model/SourceTag.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageSource request structure.
                */
                class ModifyStreamPackageSourceRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageSourceRequest();
                    ~ModifyStreamPackageSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source Id.
                     * @return Id Source Id.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Source Id.
                     * @param _id Source Id.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Modified name.
                     * @return Name Modified name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Modified name.
                     * @param _name Modified name.
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
                     * 获取Distinguish between live broadcast and on-demand VOD source types.
Optional values: Live, VOD (on demand)
                     * @return Type Distinguish between live broadcast and on-demand VOD source types.
Optional values: Live, VOD (on demand)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Distinguish between live broadcast and on-demand VOD source types.
Optional values: Live, VOD (on demand)
                     * @param _type Distinguish between live broadcast and on-demand VOD source types.
Optional values: Live, VOD (on demand)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取source configuration.
                     * @return PackageConfs source configuration.
                     * 
                     */
                    std::vector<SourcePackageConf> GetPackageConfs() const;

                    /**
                     * 设置source configuration.
                     * @param _packageConfs source configuration.
                     * 
                     */
                    void SetPackageConfs(const std::vector<SourcePackageConf>& _packageConfs);

                    /**
                     * 判断参数 PackageConfs 是否已赋值
                     * @return PackageConfs 是否已赋值
                     * 
                     */
                    bool PackageConfsHasBeenSet() const;

                    /**
                     * 获取ADS can return more precise advertisements based on Source Tag information.
                     * @return SourceTags ADS can return more precise advertisements based on Source Tag information.
                     * 
                     */
                    std::vector<SourceTag> GetSourceTags() const;

                    /**
                     * 设置ADS can return more precise advertisements based on Source Tag information.
                     * @param _sourceTags ADS can return more precise advertisements based on Source Tag information.
                     * 
                     */
                    void SetSourceTags(const std::vector<SourceTag>& _sourceTags);

                    /**
                     * 判断参数 SourceTags 是否已赋值
                     * @return SourceTags 是否已赋值
                     * 
                     */
                    bool SourceTagsHasBeenSet() const;

                private:

                    /**
                     * Source Id.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Modified name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Distinguish between live broadcast and on-demand VOD source types.
Optional values: Live, VOD (on demand)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * source configuration.
                     */
                    std::vector<SourcePackageConf> m_packageConfs;
                    bool m_packageConfsHasBeenSet;

                    /**
                     * ADS can return more precise advertisements based on Source Tag information.
                     */
                    std::vector<SourceTag> m_sourceTags;
                    bool m_sourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGESOURCEREQUEST_H_
