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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SOURCEINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/SourcePackageConf.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * SourceInfo.
                */
                class SourceInfo : public AbstractModel
                {
                public:
                    SourceInfo();
                    ~SourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取name.
                     * @return Name name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置name.
                     * @param _name name.
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
                     * 获取The source type distinguishes between live broadcast and on-demand Vod.
                     * @return Type The source type distinguishes between live broadcast and on-demand Vod.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The source type distinguishes between live broadcast and on-demand Vod.
                     * @param _type The source type distinguishes between live broadcast and on-demand Vod.
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
                     * 获取Source configuration.
                     * @return PackageConf Source configuration.
                     * 
                     */
                    std::vector<SourcePackageConf> GetPackageConf() const;

                    /**
                     * 设置Source configuration.
                     * @param _packageConf Source configuration.
                     * 
                     */
                    void SetPackageConf(const std::vector<SourcePackageConf>& _packageConf);

                    /**
                     * 判断参数 PackageConf 是否已赋值
                     * @return PackageConf 是否已赋值
                     * 
                     */
                    bool PackageConfHasBeenSet() const;

                    /**
                     * 获取ID.
                     * @return Id ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID.
                     * @param _id ID.
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
                     * 获取Create timestamp.
                     * @return CreateTime Create timestamp.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Create timestamp.
                     * @param _createTime Create timestamp.
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
                     * 获取Update timestamp.
                     * @return UpdateTime Update timestamp.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Update timestamp.
                     * @param _updateTime Update timestamp.
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
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The source type distinguishes between live broadcast and on-demand Vod.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Source configuration.
                     */
                    std::vector<SourcePackageConf> m_packageConf;
                    bool m_packageConfHasBeenSet;

                    /**
                     * ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Create timestamp.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timestamp.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SOURCEINFO_H_
