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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEDOCTOVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEDOCTOVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoInput.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoCosInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateDocToVideoTask request structure.
                */
                class CreateDocToVideoTaskRequest : public AbstractModel
                {
                public:
                    CreateDocToVideoTaskRequest();
                    ~CreateDocToVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Input information for AIGC document‑to‑video generation</p>
                     * @return Input <p>Input information for AIGC document‑to‑video generation</p>
                     * 
                     */
                    DocToVideoInput GetInput() const;

                    /**
                     * 设置<p>Input information for AIGC document‑to‑video generation</p>
                     * @param _input <p>Input information for AIGC document‑to‑video generation</p>
                     * 
                     */
                    void SetInput(const DocToVideoInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>User cos information, used to store the generation result</p>
                     * @return CosInfo <p>User cos information, used to store the generation result</p>
                     * 
                     */
                    DocToVideoCosInfo GetCosInfo() const;

                    /**
                     * 设置<p>User cos information, used to store the generation result</p>
                     * @param _cosInfo <p>User cos information, used to store the generation result</p>
                     * 
                     */
                    void SetCosInfo(const DocToVideoCosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResourceId 
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置
                     * @param _resourceId 
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Input information for AIGC document‑to‑video generation</p>
                     */
                    DocToVideoInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>User cos information, used to store the generation result</p>
                     */
                    DocToVideoCosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEDOCTOVIDEOTASKREQUEST_H_
