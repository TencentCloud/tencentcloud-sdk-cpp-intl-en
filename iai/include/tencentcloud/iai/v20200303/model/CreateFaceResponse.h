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
                     * 获取<p>Number of faces that joined successfully.</p>
                     * @return SucFaceNum <p>Number of faces that joined successfully.</p>
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
                     * 获取<p>List of face IDs that joined successfully.</p>
                     * @return SucFaceIds <p>List of face IDs that joined successfully.</p>
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
                     * 获取<p>Addition result of each face image.</p><ul><li>Other non-zero values represent algorithm service exceptions, with the following value ranges:<br>-1101 represents no face detected.<br>-1102 represents image decoding failure.<br>-1109 represents image size too large or too small.<br>-1601 represents the image quality control requirement is not met.<br>-1604 represents face similarity does not exceed FaceMatchThreshold. </li><li>The order of RetCode is consistent with the sequence of Images or Urls in the input parameters.</li></ul>
                     * @return RetCode <p>Addition result of each face image.</p><ul><li>Other non-zero values represent algorithm service exceptions, with the following value ranges:<br>-1101 represents no face detected.<br>-1102 represents image decoding failure.<br>-1109 represents image size too large or too small.<br>-1601 represents the image quality control requirement is not met.<br>-1604 represents face similarity does not exceed FaceMatchThreshold. </li><li>The order of RetCode is consistent with the sequence of Images or Urls in the input parameters.</li></ul>
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
                     * 获取<p>Index of successfully added faces.</p><ul><li>The index order is consistent with the sequence of Images or Urls in the input parameter.</li><li>For example, if there are 3 Urls in Urls and the second url fails, the value of SucIndexes is [0,2].</li></ul>
                     * @return SucIndexes <p>Index of successfully added faces.</p><ul><li>The index order is consistent with the sequence of Images or Urls in the input parameter.</li><li>For example, if there are 3 Urls in Urls and the second url fails, the value of SucIndexes is [0,2].</li></ul>
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
                     * 获取<p>Face bounding box position of successfully joined faces. The sequence is consistent with the sequence of Images or Urls in the input parameter.</p>
                     * @return SucFaceRects <p>Face bounding box position of successfully joined faces. The sequence is consistent with the sequence of Images or Urls in the input parameter.</p>
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
                     * 获取<p>Algorithm model version used for face recognition.</p>
                     * @return FaceModelVersion <p>Algorithm model version used for face recognition.</p>
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
                     * <p>Number of faces that joined successfully.</p>
                     */
                    uint64_t m_sucFaceNum;
                    bool m_sucFaceNumHasBeenSet;

                    /**
                     * <p>List of face IDs that joined successfully.</p>
                     */
                    std::vector<std::string> m_sucFaceIds;
                    bool m_sucFaceIdsHasBeenSet;

                    /**
                     * <p>Addition result of each face image.</p><ul><li>Other non-zero values represent algorithm service exceptions, with the following value ranges:<br>-1101 represents no face detected.<br>-1102 represents image decoding failure.<br>-1109 represents image size too large or too small.<br>-1601 represents the image quality control requirement is not met.<br>-1604 represents face similarity does not exceed FaceMatchThreshold. </li><li>The order of RetCode is consistent with the sequence of Images or Urls in the input parameters.</li></ul>
                     */
                    std::vector<int64_t> m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * <p>Index of successfully added faces.</p><ul><li>The index order is consistent with the sequence of Images or Urls in the input parameter.</li><li>For example, if there are 3 Urls in Urls and the second url fails, the value of SucIndexes is [0,2].</li></ul>
                     */
                    std::vector<uint64_t> m_sucIndexes;
                    bool m_sucIndexesHasBeenSet;

                    /**
                     * <p>Face bounding box position of successfully joined faces. The sequence is consistent with the sequence of Images or Urls in the input parameter.</p>
                     */
                    std::vector<FaceRect> m_sucFaceRects;
                    bool m_sucFaceRectsHasBeenSet;

                    /**
                     * <p>Algorithm model version used for face recognition.</p>
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACERESPONSE_H_
