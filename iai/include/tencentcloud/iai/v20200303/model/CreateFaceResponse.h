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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * CreateFace response structure.
                */
                class CreateFaceResponse : public AbstractModel
                {
                public:
                    CreateFaceResponse();
                    ~CreateFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of successfully added faces
                     * @return SucFaceNum Number of successfully added faces
                     * 
                     */
                    uint64_t GetSucFaceNum() const;

                    /**
                     * 判断参数 SucFaceNum 是否已赋值
                     * @return SucFaceNum 是否已赋值
                     * 
                     */
                    bool SucFaceNumHasBeenSet() const;

                    /**
                     * 获取List of IDs of successfully added faces
                     * @return SucFaceIds List of IDs of successfully added faces
                     * 
                     */
                    std::vector<std::string> GetSucFaceIds() const;

                    /**
                     * 判断参数 SucFaceIds 是否已赋值
                     * @return SucFaceIds 是否已赋值
                     * 
                     */
                    bool SucFaceIdsHasBeenSet() const;

                    /**
                     * 获取Adding result for each face image. -1101: no face detected; -1102: image decoding failed; 
-1601: the image quality control requirement is not met; -1604: the face similarity is not above `FaceMatchThreshold`. 
Other non-zero values: algorithm service exception. 
The order of `RetCode` values is the same as the order of `Images` or `Urls` in the input parameter.
                     * @return RetCode Adding result for each face image. -1101: no face detected; -1102: image decoding failed; 
-1601: the image quality control requirement is not met; -1604: the face similarity is not above `FaceMatchThreshold`. 
Other non-zero values: algorithm service exception. 
The order of `RetCode` values is the same as the order of `Images` or `Urls` in the input parameter.
                     * 
                     */
                    std::vector<int64_t> GetRetCode() const;

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取Indexes of successfully added faces. The order of indexes is the same as the order of `Images` or `Urls` in the input parameter. 
For example, if there are 3 URLs in `Urls`, and the second URL fails, then the value of `SucIndexes` will be [0,2].
                     * @return SucIndexes Indexes of successfully added faces. The order of indexes is the same as the order of `Images` or `Urls` in the input parameter. 
For example, if there are 3 URLs in `Urls`, and the second URL fails, then the value of `SucIndexes` will be [0,2].
                     * 
                     */
                    std::vector<uint64_t> GetSucIndexes() const;

                    /**
                     * 判断参数 SucIndexes 是否已赋值
                     * @return SucIndexes 是否已赋值
                     * 
                     */
                    bool SucIndexesHasBeenSet() const;

                    /**
                     * 获取Frame positions of successfully added faces. The order is the same as the order of `Images` or `Urls` in the input parameter.
                     * @return SucFaceRects Frame positions of successfully added faces. The order is the same as the order of `Images` or `Urls` in the input parameter.
                     * 
                     */
                    std::vector<FaceRect> GetSucFaceRects() const;

                    /**
                     * 判断参数 SucFaceRects 是否已赋值
                     * @return SucFaceRects 是否已赋值
                     * 
                     */
                    bool SucFaceRectsHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Number of successfully added faces
                     */
                    uint64_t m_sucFaceNum;
                    bool m_sucFaceNumHasBeenSet;

                    /**
                     * List of IDs of successfully added faces
                     */
                    std::vector<std::string> m_sucFaceIds;
                    bool m_sucFaceIdsHasBeenSet;

                    /**
                     * Adding result for each face image. -1101: no face detected; -1102: image decoding failed; 
-1601: the image quality control requirement is not met; -1604: the face similarity is not above `FaceMatchThreshold`. 
Other non-zero values: algorithm service exception. 
The order of `RetCode` values is the same as the order of `Images` or `Urls` in the input parameter.
                     */
                    std::vector<int64_t> m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * Indexes of successfully added faces. The order of indexes is the same as the order of `Images` or `Urls` in the input parameter. 
For example, if there are 3 URLs in `Urls`, and the second URL fails, then the value of `SucIndexes` will be [0,2].
                     */
                    std::vector<uint64_t> m_sucIndexes;
                    bool m_sucIndexesHasBeenSet;

                    /**
                     * Frame positions of successfully added faces. The order is the same as the order of `Images` or `Urls` in the input parameter.
                     */
                    std::vector<FaceRect> m_sucFaceRects;
                    bool m_sucFaceRectsHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_
