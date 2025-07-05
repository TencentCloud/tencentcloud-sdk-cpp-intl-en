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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONPROJECTRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * CreateApplicationProject response structure.
                */
                class CreateApplicationProjectResponse : public AbstractModel
                {
                public:
                    CreateApplicationProjectResponse();
                    ~CreateApplicationProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Generated project ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Generated project ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Generated project ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONPROJECTRESPONSE_H_
