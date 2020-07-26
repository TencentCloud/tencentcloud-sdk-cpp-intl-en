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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_RESULTSRETURNSBYGROUP_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_RESULTSRETURNSBYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>
#include <tencentcloud/iai/v20200303/model/GroupCandidate.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Recognition result.

                */
                class ResultsReturnsByGroup : public AbstractModel
                {
                public:
                    ResultsReturnsByGroup();
                    ~ResultsReturnsByGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Position of detected face frame.
                     * @return FaceRect Position of detected face frame.
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置Position of detected face frame.
                     * @param FaceRect Position of detected face frame.
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取Recognition result.
                     * @return GroupCandidates Recognition result.
                     */
                    std::vector<GroupCandidate> GetGroupCandidates() const;

                    /**
                     * 设置Recognition result.
                     * @param GroupCandidates Recognition result.
                     */
                    void SetGroupCandidates(const std::vector<GroupCandidate>& _groupCandidates);

                    /**
                     * 判断参数 GroupCandidates 是否已赋值
                     * @return GroupCandidates 是否已赋值
                     */
                    bool GroupCandidatesHasBeenSet() const;

                    /**
                     * 获取Status return code of detected face image. 0: normal. 
-1601: the image quality control requirement is not met; in this case, `Candidate` is empty.
                     * @return RetCode Status return code of detected face image. 0: normal. 
-1601: the image quality control requirement is not met; in this case, `Candidate` is empty.
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置Status return code of detected face image. 0: normal. 
-1601: the image quality control requirement is not met; in this case, `Candidate` is empty.
                     * @param RetCode Status return code of detected face image. 0: normal. 
-1601: the image quality control requirement is not met; in this case, `Candidate` is empty.
                     */
                    void SetRetCode(const int64_t& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     */
                    bool RetCodeHasBeenSet() const;

                private:

                    /**
                     * Position of detected face frame.
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * Recognition result.
                     */
                    std::vector<GroupCandidate> m_groupCandidates;
                    bool m_groupCandidatesHasBeenSet;

                    /**
                     * Status return code of detected face image. 0: normal. 
-1601: the image quality control requirement is not met; in this case, `Candidate` is empty.
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_RESULTSRETURNSBYGROUP_H_
