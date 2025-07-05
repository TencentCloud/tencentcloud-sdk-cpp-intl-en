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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SOURCELOCATIONINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SOURCELOCATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/SegmentDeliverInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * SourceLocation configuration information.
                */
                class SourceLocationInfo : public AbstractModel
                {
                public:
                    SourceLocationInfo();
                    ~SourceLocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID, unique identification.
                     * @return Id ID, unique identification.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID, unique identification.
                     * @param _id ID, unique identification.
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
                     * 获取SourceLocation name.
                     * @return Name SourceLocation name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置SourceLocation name.
                     * @param _name SourceLocation name.
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
                     * 获取area.
                     * @return Region area.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置area.
                     * @param _region area.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取BaseUrl information.
                     * @return BaseUrl BaseUrl information.
                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置BaseUrl information.
                     * @param _baseUrl BaseUrl information.
                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取Whether to enable patching.
                     * @return SegmentDeliverEnable Whether to enable patching.
                     * 
                     */
                    bool GetSegmentDeliverEnable() const;

                    /**
                     * 设置Whether to enable patching.
                     * @param _segmentDeliverEnable Whether to enable patching.
                     * 
                     */
                    void SetSegmentDeliverEnable(const bool& _segmentDeliverEnable);

                    /**
                     * 判断参数 SegmentDeliverEnable 是否已赋值
                     * @return SegmentDeliverEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverEnableHasBeenSet() const;

                    /**
                     * 获取Patch configuration.
                     * @return SegmentDeliverConf Patch configuration.
                     * 
                     */
                    SegmentDeliverInfo GetSegmentDeliverConf() const;

                    /**
                     * 设置Patch configuration.
                     * @param _segmentDeliverConf Patch configuration.
                     * 
                     */
                    void SetSegmentDeliverConf(const SegmentDeliverInfo& _segmentDeliverConf);

                    /**
                     * 判断参数 SegmentDeliverConf 是否已赋值
                     * @return SegmentDeliverConf 是否已赋值
                     * 
                     */
                    bool SegmentDeliverConfHasBeenSet() const;

                    /**
                     * 获取List of bound live broadcast source ids.
                     * @return AttachedLiveSources List of bound live broadcast source ids.
                     * 
                     */
                    std::vector<std::string> GetAttachedLiveSources() const;

                    /**
                     * 设置List of bound live broadcast source ids.
                     * @param _attachedLiveSources List of bound live broadcast source ids.
                     * 
                     */
                    void SetAttachedLiveSources(const std::vector<std::string>& _attachedLiveSources);

                    /**
                     * 判断参数 AttachedLiveSources 是否已赋值
                     * @return AttachedLiveSources 是否已赋值
                     * 
                     */
                    bool AttachedLiveSourcesHasBeenSet() const;

                    /**
                     * 获取List of bound on-demand source ids.
                     * @return AttachedVodSources List of bound on-demand source ids.
                     * 
                     */
                    std::vector<std::string> GetAttachedVodSources() const;

                    /**
                     * 设置List of bound on-demand source ids.
                     * @param _attachedVodSources List of bound on-demand source ids.
                     * 
                     */
                    void SetAttachedVodSources(const std::vector<std::string>& _attachedVodSources);

                    /**
                     * 判断参数 AttachedVodSources 是否已赋值
                     * @return AttachedVodSources 是否已赋值
                     * 
                     */
                    bool AttachedVodSourcesHasBeenSet() const;

                    /**
                     * 获取Source location creation time, Unix timestamp.
                     * @return CreateTime Source location creation time, Unix timestamp.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Source location creation time, Unix timestamp.
                     * @param _createTime Source location creation time, Unix timestamp.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Source location last modified time, Unix timestamp.
                     * @return UpdateTime Source location last modified time, Unix timestamp.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Source location last modified time, Unix timestamp.
                     * @param _updateTime Source location last modified time, Unix timestamp.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable package distribution sharding, it is enabled by default.
                     * @return SegmentDeliverUsePackageEnable Whether to enable package distribution sharding, it is enabled by default.
                     * 
                     */
                    bool GetSegmentDeliverUsePackageEnable() const;

                    /**
                     * 设置Whether to enable package distribution sharding, it is enabled by default.
                     * @param _segmentDeliverUsePackageEnable Whether to enable package distribution sharding, it is enabled by default.
                     * 
                     */
                    void SetSegmentDeliverUsePackageEnable(const bool& _segmentDeliverUsePackageEnable);

                    /**
                     * 判断参数 SegmentDeliverUsePackageEnable 是否已赋值
                     * @return SegmentDeliverUsePackageEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverUsePackageEnableHasBeenSet() const;

                private:

                    /**
                     * ID, unique identification.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * SourceLocation name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * area.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * BaseUrl information.
                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * Whether to enable patching.
                     */
                    bool m_segmentDeliverEnable;
                    bool m_segmentDeliverEnableHasBeenSet;

                    /**
                     * Patch configuration.
                     */
                    SegmentDeliverInfo m_segmentDeliverConf;
                    bool m_segmentDeliverConfHasBeenSet;

                    /**
                     * List of bound live broadcast source ids.
                     */
                    std::vector<std::string> m_attachedLiveSources;
                    bool m_attachedLiveSourcesHasBeenSet;

                    /**
                     * List of bound on-demand source ids.
                     */
                    std::vector<std::string> m_attachedVodSources;
                    bool m_attachedVodSourcesHasBeenSet;

                    /**
                     * Source location creation time, Unix timestamp.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Source location last modified time, Unix timestamp.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether to enable package distribution sharding, it is enabled by default.
                     */
                    bool m_segmentDeliverUsePackageEnable;
                    bool m_segmentDeliverUsePackageEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SOURCELOCATIONINFO_H_
