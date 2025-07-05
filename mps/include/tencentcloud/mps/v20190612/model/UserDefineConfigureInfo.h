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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_USERDEFINECONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_USERDEFINECONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/UserDefineFaceReviewTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/UserDefineAsrTextReviewTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/UserDefineOcrTextReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Control parameter of a custom audit task
                */
                class UserDefineConfigureInfo : public AbstractModel
                {
                public:
                    UserDefineConfigureInfo();
                    ~UserDefineConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter of custom figure audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FaceReviewInfo Control parameter of custom figure audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UserDefineFaceReviewTemplateInfo GetFaceReviewInfo() const;

                    /**
                     * 设置Control parameter of custom figure audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _faceReviewInfo Control parameter of custom figure audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFaceReviewInfo(const UserDefineFaceReviewTemplateInfo& _faceReviewInfo);

                    /**
                     * 判断参数 FaceReviewInfo 是否已赋值
                     * @return FaceReviewInfo 是否已赋值
                     * 
                     */
                    bool FaceReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of custom speech audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrReviewInfo Control parameter of custom speech audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UserDefineAsrTextReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置Control parameter of custom speech audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _asrReviewInfo Control parameter of custom speech audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAsrReviewInfo(const UserDefineAsrTextReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of custom text audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrReviewInfo Control parameter of custom text audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UserDefineOcrTextReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置Control parameter of custom text audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ocrReviewInfo Control parameter of custom text audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOcrReviewInfo(const UserDefineOcrTextReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter of custom figure audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UserDefineFaceReviewTemplateInfo m_faceReviewInfo;
                    bool m_faceReviewInfoHasBeenSet;

                    /**
                     * Control parameter of custom speech audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UserDefineAsrTextReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Control parameter of custom text audit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UserDefineOcrTextReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_USERDEFINECONFIGUREINFO_H_
