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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceDetailInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectFaceAttributes response structure.
                */
                class DetectFaceAttributesResponse : public AbstractModel
                {
                public:
                    DetectFaceAttributesResponse();
                    ~DetectFaceAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Width of requested image.
                     * @return ImageWidth Width of requested image.
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取Height of requested image.
                     * @return ImageHeight Height of requested image.
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取Face information list.
                     * @return FaceDetailInfos Face information list.
                     */
                    std::vector<FaceDetailInfo> GetFaceDetailInfos() const;

                    /**
                     * 判断参数 FaceDetailInfos 是否已赋值
                     * @return FaceDetailInfos 是否已赋值
                     */
                    bool FaceDetailInfosHasBeenSet() const;

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
                     * Width of requested image.
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * Height of requested image.
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * Face information list.
                     */
                    std::vector<FaceDetailInfo> m_faceDetailInfos;
                    bool m_faceDetailInfosHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESRESPONSE_H_
