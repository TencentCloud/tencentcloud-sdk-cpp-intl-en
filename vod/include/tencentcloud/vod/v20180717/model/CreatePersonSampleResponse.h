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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPERSONSAMPLERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPERSONSAMPLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSamplePerson.h>
#include <tencentcloud/vod/v20180717/model/AiSampleFailFaceInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreatePersonSample response structure.
                */
                class CreatePersonSampleResponse : public AbstractModel
                {
                public:
                    CreatePersonSampleResponse();
                    ~CreatePersonSampleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Figure information.
                     * @return Person Figure information.
                     */
                    AiSamplePerson GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取Face information failed to be processed.
                     * @return FailFaceInfoSet Face information failed to be processed.
                     */
                    std::vector<AiSampleFailFaceInfo> GetFailFaceInfoSet() const;

                    /**
                     * 判断参数 FailFaceInfoSet 是否已赋值
                     * @return FailFaceInfoSet 是否已赋值
                     */
                    bool FailFaceInfoSetHasBeenSet() const;

                private:

                    /**
                     * Figure information.
                     */
                    AiSamplePerson m_person;
                    bool m_personHasBeenSet;

                    /**
                     * Face information failed to be processed.
                     */
                    std::vector<AiSampleFailFaceInfo> m_failFaceInfoSet;
                    bool m_failFaceInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPERSONSAMPLERESPONSE_H_