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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFORESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeProjectInfo response structure.
                */
                class DescribeProjectInfoResponse : public AbstractModel
                {
                public:
                    DescribeProjectInfoResponse();
                    ~DescribeProjectInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Project name.
                     * @return ProjectName Project name.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Project description.
                     * @return ProjectDescription Project description.
                     * 
                     */
                    std::string GetProjectDescription() const;

                    /**
                     * 判断参数 ProjectDescription 是否已赋值
                     * @return ProjectDescription 是否已赋值
                     * 
                     */
                    bool ProjectDescriptionHasBeenSet() const;

                    /**
                     * 获取Project permission mode, black for blocklist, white for allowlist.
                     * @return PolicyMode Project permission mode, black for blocklist, white for allowlist.
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                    /**
                     * 获取Project information modification time.
                     * @return ModifyTime Project information modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Project name.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project description.
                     */
                    std::string m_projectDescription;
                    bool m_projectDescriptionHasBeenSet;

                    /**
                     * Project permission mode, black for blocklist, white for allowlist.
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                    /**
                     * Project information modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFORESPONSE_H_
