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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESOURCEREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESOURCEREQUEST_H_

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
                * CreateStreamPackageSource request structure.
                */
                class CreateStreamPackageSourceRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageSourceRequest();
                    ~CreateStreamPackageSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The location id to which this source belongs is required and uniquely bound to one location.
                     * @return AttachedLocation The location id to which this source belongs is required and uniquely bound to one location.
                     * 
                     */
                    std::string GetAttachedLocation() const;

                    /**
                     * 设置The location id to which this source belongs is required and uniquely bound to one location.
                     * @param _attachedLocation The location id to which this source belongs is required and uniquely bound to one location.
                     * 
                     */
                    void SetAttachedLocation(const std::string& _attachedLocation);

                    /**
                     * 判断参数 AttachedLocation 是否已赋值
                     * @return AttachedLocation 是否已赋值
                     * 
                     */
                    bool AttachedLocationHasBeenSet() const;

                    /**
                     * 获取Source name, globally unique under location.
                     * @return Name Source name, globally unique under location.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Source name, globally unique under location.
                     * @param _name Source name, globally unique under location.
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
                     * 获取Distinguish between live broadcast and on-demand VOD source types. Optional values: Live, VOD.
                     * @return Type Distinguish between live broadcast and on-demand VOD source types. Optional values: Live, VOD.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Distinguish between live broadcast and on-demand VOD source types. Optional values: Live, VOD.
                     * @param _type Distinguish between live broadcast and on-demand VOD source types. Optional values: Live, VOD.
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
                     * 获取source specific configuration.
                     * @return PackageConfs source specific configuration.
                     * 
                     */
                    std::vector<SourcePackageConf> GetPackageConfs() const;

                    /**
                     * 设置source specific configuration.
                     * @param _packageConfs source specific configuration.
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
                     * 获取The sourcetag allows ADS to deliver more precise ads based on the Source Tag information
                     * @return SourceTags The sourcetag allows ADS to deliver more precise ads based on the Source Tag information
                     * 
                     */
                    std::vector<SourceTag> GetSourceTags() const;

                    /**
                     * 设置The sourcetag allows ADS to deliver more precise ads based on the Source Tag information
                     * @param _sourceTags The sourcetag allows ADS to deliver more precise ads based on the Source Tag information
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
                     * The location id to which this source belongs is required and uniquely bound to one location.
                     */
                    std::string m_attachedLocation;
                    bool m_attachedLocationHasBeenSet;

                    /**
                     * Source name, globally unique under location.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Distinguish between live broadcast and on-demand VOD source types. Optional values: Live, VOD.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * source specific configuration.
                     */
                    std::vector<SourcePackageConf> m_packageConfs;
                    bool m_packageConfsHasBeenSet;

                    /**
                     * The sourcetag allows ADS to deliver more precise ads based on the Source Tag information
                     */
                    std::vector<SourceTag> m_sourceTags;
                    bool m_sourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESOURCEREQUEST_H_
