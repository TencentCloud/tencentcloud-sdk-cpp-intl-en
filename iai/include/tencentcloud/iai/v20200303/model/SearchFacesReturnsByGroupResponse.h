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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESRETURNSBYGROUPRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESRETURNSBYGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/ResultsReturnsByGroup.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * SearchFacesReturnsByGroup response structure.
                */
                class SearchFacesReturnsByGroupResponse : public AbstractModel
                {
                public:
                    SearchFacesReturnsByGroupResponse();
                    ~SearchFacesReturnsByGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Number of faces included in searched groups.
                     * @return FaceNum Number of faces included in searched groups.
                     */
                    uint64_t GetFaceNum() const;

                    /**
                     * 判断参数 FaceNum 是否已赋值
                     * @return FaceNum 是否已赋值
                     */
                    bool FaceNumHasBeenSet() const;

                    /**
                     * 获取Recognition result.
                     * @return ResultsReturnsByGroup Recognition result.
                     */
                    std::vector<ResultsReturnsByGroup> GetResultsReturnsByGroup() const;

                    /**
                     * 判断参数 ResultsReturnsByGroup 是否已赋值
                     * @return ResultsReturnsByGroup 是否已赋值
                     */
                    bool ResultsReturnsByGroupHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Number of faces included in searched groups.
                     */
                    uint64_t m_faceNum;
                    bool m_faceNumHasBeenSet;

                    /**
                     * Recognition result.
                     */
                    std::vector<ResultsReturnsByGroup> m_resultsReturnsByGroup;
                    bool m_resultsReturnsByGroupHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESRETURNSBYGROUPRESPONSE_H_
