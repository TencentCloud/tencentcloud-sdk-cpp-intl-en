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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/UserDefineFaceReviewTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/UserDefineAsrTextReviewTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/UserDefineOcrTextReviewTemplateInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Control parameter of custom audit task.
                */
                class UserDefineConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    UserDefineConfigureInfoForUpdate();
                    ~UserDefineConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter of custom figure audit.
                     * @return FaceReviewInfo Control parameter of custom figure audit.
                     */
                    UserDefineFaceReviewTemplateInfoForUpdate GetFaceReviewInfo() const;

                    /**
                     * 设置Control parameter of custom figure audit.
                     * @param FaceReviewInfo Control parameter of custom figure audit.
                     */
                    void SetFaceReviewInfo(const UserDefineFaceReviewTemplateInfoForUpdate& _faceReviewInfo);

                    /**
                     * 判断参数 FaceReviewInfo 是否已赋值
                     * @return FaceReviewInfo 是否已赋值
                     */
                    bool FaceReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of custom speech audit.
                     * @return AsrReviewInfo Control parameter of custom speech audit.
                     */
                    UserDefineAsrTextReviewTemplateInfoForUpdate GetAsrReviewInfo() const;

                    /**
                     * 设置Control parameter of custom speech audit.
                     * @param AsrReviewInfo Control parameter of custom speech audit.
                     */
                    void SetAsrReviewInfo(const UserDefineAsrTextReviewTemplateInfoForUpdate& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of custom text audit.
                     * @return OcrReviewInfo Control parameter of custom text audit.
                     */
                    UserDefineOcrTextReviewTemplateInfoForUpdate GetOcrReviewInfo() const;

                    /**
                     * 设置Control parameter of custom text audit.
                     * @param OcrReviewInfo Control parameter of custom text audit.
                     */
                    void SetOcrReviewInfo(const UserDefineOcrTextReviewTemplateInfoForUpdate& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter of custom figure audit.
                     */
                    UserDefineFaceReviewTemplateInfoForUpdate m_faceReviewInfo;
                    bool m_faceReviewInfoHasBeenSet;

                    /**
                     * Control parameter of custom speech audit.
                     */
                    UserDefineAsrTextReviewTemplateInfoForUpdate m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Control parameter of custom text audit.
                     */
                    UserDefineOcrTextReviewTemplateInfoForUpdate m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFOFORUPDATE_H_
