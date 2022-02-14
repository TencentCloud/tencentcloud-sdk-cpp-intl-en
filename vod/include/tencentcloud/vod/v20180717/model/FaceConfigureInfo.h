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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FACECONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FACECONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Control parameter of face recognition task
                */
                class FaceConfigureInfo : public AbstractModel
                {
                public:
                    FaceConfigureInfo();
                    ~FaceConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch of face recognition task. Valid values:
<li>ON: enables intelligent face recognition task;</li>
<li>OFF: disables intelligent face recognition task.</li>
                     * @return Switch Switch of face recognition task. Valid values:
<li>ON: enables intelligent face recognition task;</li>
<li>OFF: disables intelligent face recognition task.</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch of face recognition task. Valid values:
<li>ON: enables intelligent face recognition task;</li>
<li>OFF: disables intelligent face recognition task.</li>
                     * @param Switch Switch of face recognition task. Valid values:
<li>ON: enables intelligent face recognition task;</li>
<li>OFF: disables intelligent face recognition task.</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0–100. Default value: 95.
                     * @return Score Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0–100. Default value: 95.
                     */
                    double GetScore() const;

                    /**
                     * 设置Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0–100. Default value: 95.
                     * @param Score Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0–100. Default value: 95.
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Default face filter labels, which specify the types of faces to return. If this parameter is left empty, the recognition results for all labels are returned. Valid values:
<li>`entertainment`: people in the entertainment industry</li>
<li>`sport`: sports celebrities</li>
<li>`politician`: politically sensitive people</li>
                     * @return DefaultLibraryLabelSet Default face filter labels, which specify the types of faces to return. If this parameter is left empty, the recognition results for all labels are returned. Valid values:
<li>`entertainment`: people in the entertainment industry</li>
<li>`sport`: sports celebrities</li>
<li>`politician`: politically sensitive people</li>
                     */
                    std::vector<std::string> GetDefaultLibraryLabelSet() const;

                    /**
                     * 设置Default face filter labels, which specify the types of faces to return. If this parameter is left empty, the recognition results for all labels are returned. Valid values:
<li>`entertainment`: people in the entertainment industry</li>
<li>`sport`: sports celebrities</li>
<li>`politician`: politically sensitive people</li>
                     * @param DefaultLibraryLabelSet Default face filter labels, which specify the types of faces to return. If this parameter is left empty, the recognition results for all labels are returned. Valid values:
<li>`entertainment`: people in the entertainment industry</li>
<li>`sport`: sports celebrities</li>
<li>`politician`: politically sensitive people</li>
                     */
                    void SetDefaultLibraryLabelSet(const std::vector<std::string>& _defaultLibraryLabelSet);

                    /**
                     * 判断参数 DefaultLibraryLabelSet 是否已赋值
                     * @return DefaultLibraryLabelSet 是否已赋值
                     */
                    bool DefaultLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取Custom face labels for filtering. After you specify a label, callbacks of face images without this label will be returned. If this parameter is not specified or left empty, callbacks of all face images will be returned.
You can specify up to 100 labels, with each containing up to 16 characters.
                     * @return UserDefineLibraryLabelSet Custom face labels for filtering. After you specify a label, callbacks of face images without this label will be returned. If this parameter is not specified or left empty, callbacks of all face images will be returned.
You can specify up to 100 labels, with each containing up to 16 characters.
                     */
                    std::vector<std::string> GetUserDefineLibraryLabelSet() const;

                    /**
                     * 设置Custom face labels for filtering. After you specify a label, callbacks of face images without this label will be returned. If this parameter is not specified or left empty, callbacks of all face images will be returned.
You can specify up to 100 labels, with each containing up to 16 characters.
                     * @param UserDefineLibraryLabelSet Custom face labels for filtering. After you specify a label, callbacks of face images without this label will be returned. If this parameter is not specified or left empty, callbacks of all face images will be returned.
You can specify up to 100 labels, with each containing up to 16 characters.
                     */
                    void SetUserDefineLibraryLabelSet(const std::vector<std::string>& _userDefineLibraryLabelSet);

                    /**
                     * 判断参数 UserDefineLibraryLabelSet 是否已赋值
                     * @return UserDefineLibraryLabelSet 是否已赋值
                     */
                    bool UserDefineLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取Figure library. Valid values:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
<li>All: both default and custom figure libraries will be used.</li>
Default value: All (both default and custom figure libraries will be used.)
                     * @return FaceLibrary Figure library. Valid values:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
<li>All: both default and custom figure libraries will be used.</li>
Default value: All (both default and custom figure libraries will be used.)
                     */
                    std::string GetFaceLibrary() const;

                    /**
                     * 设置Figure library. Valid values:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
<li>All: both default and custom figure libraries will be used.</li>
Default value: All (both default and custom figure libraries will be used.)
                     * @param FaceLibrary Figure library. Valid values:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
<li>All: both default and custom figure libraries will be used.</li>
Default value: All (both default and custom figure libraries will be used.)
                     */
                    void SetFaceLibrary(const std::string& _faceLibrary);

                    /**
                     * 判断参数 FaceLibrary 是否已赋值
                     * @return FaceLibrary 是否已赋值
                     */
                    bool FaceLibraryHasBeenSet() const;

                private:

                    /**
                     * Switch of face recognition task. Valid values:
<li>ON: enables intelligent face recognition task;</li>
<li>OFF: disables intelligent face recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0–100. Default value: 95.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Default face filter labels, which specify the types of faces to return. If this parameter is left empty, the recognition results for all labels are returned. Valid values:
<li>`entertainment`: people in the entertainment industry</li>
<li>`sport`: sports celebrities</li>
<li>`politician`: politically sensitive people</li>
                     */
                    std::vector<std::string> m_defaultLibraryLabelSet;
                    bool m_defaultLibraryLabelSetHasBeenSet;

                    /**
                     * Custom face labels for filtering. After you specify a label, callbacks of face images without this label will be returned. If this parameter is not specified or left empty, callbacks of all face images will be returned.
You can specify up to 100 labels, with each containing up to 16 characters.
                     */
                    std::vector<std::string> m_userDefineLibraryLabelSet;
                    bool m_userDefineLibraryLabelSetHasBeenSet;

                    /**
                     * Figure library. Valid values:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
<li>All: both default and custom figure libraries will be used.</li>
Default value: All (both default and custom figure libraries will be used.)
                     */
                    std::string m_faceLibrary;
                    bool m_faceLibraryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FACECONFIGUREINFO_H_
