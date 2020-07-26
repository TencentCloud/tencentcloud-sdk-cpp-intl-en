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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETSIMILARPERSONRESULTRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETSIMILARPERSONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetSimilarPersonResult response structure.
                */
                class GetSimilarPersonResultResponse : public AbstractModel
                {
                public:
                    GetSimilarPersonResultResponse();
                    ~GetSimilarPersonResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Duplicate check task completion progress. Value range: [0.0,100.0]. `SimilarPersons` takes effect only if this parameter value is 100.
                     * @return Progress Duplicate check task completion progress. Value range: [0.0,100.0]. `SimilarPersons` takes effect only if this parameter value is 100.
                     */
                    double GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Temporary download link for the information file of the persons suspected to be duplicate. The validity period is 5 minutes, and the result file retention duration is 90 days.
The file content is an array of `SimilarPerson` values.
                     * @return SimilarPersonsUrl Temporary download link for the information file of the persons suspected to be duplicate. The validity period is 5 minutes, and the result file retention duration is 90 days.
The file content is an array of `SimilarPerson` values.
                     */
                    std::string GetSimilarPersonsUrl() const;

                    /**
                     * 判断参数 SimilarPersonsUrl 是否已赋值
                     * @return SimilarPersonsUrl 是否已赋值
                     */
                    bool SimilarPersonsUrlHasBeenSet() const;

                private:

                    /**
                     * Duplicate check task completion progress. Value range: [0.0,100.0]. `SimilarPersons` takes effect only if this parameter value is 100.
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Temporary download link for the information file of the persons suspected to be duplicate. The validity period is 5 minutes, and the result file retention duration is 90 days.
The file content is an array of `SimilarPerson` values.
                     */
                    std::string m_similarPersonsUrl;
                    bool m_similarPersonsUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETSIMILARPERSONRESULTRESPONSE_H_
