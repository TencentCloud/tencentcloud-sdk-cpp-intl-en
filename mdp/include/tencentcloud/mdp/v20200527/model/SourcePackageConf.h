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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SOURCEPACKAGECONF_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SOURCEPACKAGECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Source file information.
                */
                class SourcePackageConf : public AbstractModel
                {
                public:
                    SourcePackageConf();
                    ~SourcePackageConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Group name. When the channel is in Linear mode and vod source is selected, the group name corresponds to the output group name of the channel output.
                     * @return GroupName Group name. When the channel is in Linear mode and vod source is selected, the group name corresponds to the output group name of the channel output.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name. When the channel is in Linear mode and vod source is selected, the group name corresponds to the output group name of the channel output.
                     * @param _groupName Group name. When the channel is in Linear mode and vod source is selected, the group name corresponds to the output group name of the channel output.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Type, distinguish between HLS and DASH, optional values: HLS, DASH.
                     * @return Type Type, distinguish between HLS and DASH, optional values: HLS, DASH.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type, distinguish between HLS and DASH, optional values: HLS, DASH.
                     * @param _type Type, distinguish between HLS and DASH, optional values: HLS, DASH.
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
                     * 获取access path.
                     * @return Path access path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置access path.
                     * @param _path access path.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * Group name. When the channel is in Linear mode and vod source is selected, the group name corresponds to the output group name of the channel output.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Type, distinguish between HLS and DASH, optional values: HLS, DASH.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * access path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SOURCEPACKAGECONF_H_
