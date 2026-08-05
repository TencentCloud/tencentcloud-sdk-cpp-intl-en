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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIDRAMATASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIDRAMATASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiDramaInput.h>
#include <tencentcloud/mps/v20190612/model/VideoDramaCosInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAiDramaTask request structure.
                */
                class CreateAiDramaTaskRequest : public AbstractModel
                {
                public:
                    CreateAiDramaTaskRequest();
                    ~CreateAiDramaTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ai comic input</p>
                     * @return Input <p>ai comic input</p>
                     * 
                     */
                    AiDramaInput GetInput() const;

                    /**
                     * 设置<p>ai comic input</p>
                     * @param _input <p>ai comic input</p>
                     * 
                     */
                    void SetInput(const AiDramaInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>User cos information</p>
                     * @return CosInfo <p>User cos information</p>
                     * 
                     */
                    VideoDramaCosInfo GetCosInfo() const;

                    /**
                     * 设置<p>User cos information</p>
                     * @param _cosInfo <p>User cos information</p>
                     * 
                     */
                    void SetCosInfo(const VideoDramaCosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                private:

                    /**
                     * <p>ai comic input</p>
                     */
                    AiDramaInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>User cos information</p>
                     */
                    VideoDramaCosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIDRAMATASKREQUEST_H_
