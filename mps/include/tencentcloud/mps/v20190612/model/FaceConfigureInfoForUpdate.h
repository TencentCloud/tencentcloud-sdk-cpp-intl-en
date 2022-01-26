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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FACECONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FACECONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Control parameter of a face recognition task
                */
                class FaceConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    FaceConfigureInfoForUpdate();
                    ~FaceConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch of a face recognition task. Valid values:
<li>ON: Enables an intelligent face recognition task;</li>
<li>OFF: Disables an intelligent face recognition task.</li>
                     * @return Switch Switch of a face recognition task. Valid values:
<li>ON: Enables an intelligent face recognition task;</li>
<li>OFF: Disables an intelligent face recognition task.</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch of a face recognition task. Valid values:
<li>ON: Enables an intelligent face recognition task;</li>
<li>OFF: Disables an intelligent face recognition task.</li>
                     * @param Switch Switch of a face recognition task. Valid values:
<li>ON: Enables an intelligent face recognition task;</li>
<li>OFF: Disables an intelligent face recognition task.</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0-100.
                     * @return Score Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0-100.
                     */
                    double GetScore() const;

                    /**
                     * 设置Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0-100.
                     * @param Score Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0-100.
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Default figure filter tag, which specifies the default figure tag that needs to be returned. If this parameter is left empty or an empty value is entered, all results of the default figures will be returned. Valid values:
<li>entertainment: Entertainment celebrity;</li>
<li>sport: Sports celebrity;</li>
<li>politician: Politically sensitive figure.</li>
                     * @return DefaultLibraryLabelSet Default figure filter tag, which specifies the default figure tag that needs to be returned. If this parameter is left empty or an empty value is entered, all results of the default figures will be returned. Valid values:
<li>entertainment: Entertainment celebrity;</li>
<li>sport: Sports celebrity;</li>
<li>politician: Politically sensitive figure.</li>
                     */
                    std::vector<std::string> GetDefaultLibraryLabelSet() const;

                    /**
                     * 设置Default figure filter tag, which specifies the default figure tag that needs to be returned. If this parameter is left empty or an empty value is entered, all results of the default figures will be returned. Valid values:
<li>entertainment: Entertainment celebrity;</li>
<li>sport: Sports celebrity;</li>
<li>politician: Politically sensitive figure.</li>
                     * @param DefaultLibraryLabelSet Default figure filter tag, which specifies the default figure tag that needs to be returned. If this parameter is left empty or an empty value is entered, all results of the default figures will be returned. Valid values:
<li>entertainment: Entertainment celebrity;</li>
<li>sport: Sports celebrity;</li>
<li>politician: Politically sensitive figure.</li>
                     */
                    void SetDefaultLibraryLabelSet(const std::vector<std::string>& _defaultLibraryLabelSet);

                    /**
                     * 判断参数 DefaultLibraryLabelSet 是否已赋值
                     * @return DefaultLibraryLabelSet 是否已赋值
                     */
                    bool DefaultLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取Custom face tags for filter, which specify the face recognition results to return. If this parameter is not specified or left empty, the recognition results for all custom face tags are returned.
Up to 100 tags are allowed, each containing no more than 16 characters.
                     * @return UserDefineLibraryLabelSet Custom face tags for filter, which specify the face recognition results to return. If this parameter is not specified or left empty, the recognition results for all custom face tags are returned.
Up to 100 tags are allowed, each containing no more than 16 characters.
                     */
                    std::vector<std::string> GetUserDefineLibraryLabelSet() const;

                    /**
                     * 设置Custom face tags for filter, which specify the face recognition results to return. If this parameter is not specified or left empty, the recognition results for all custom face tags are returned.
Up to 100 tags are allowed, each containing no more than 16 characters.
                     * @param UserDefineLibraryLabelSet Custom face tags for filter, which specify the face recognition results to return. If this parameter is not specified or left empty, the recognition results for all custom face tags are returned.
Up to 100 tags are allowed, each containing no more than 16 characters.
                     */
                    void SetUserDefineLibraryLabelSet(const std::vector<std::string>& _userDefineLibraryLabelSet);

                    /**
                     * 判断参数 UserDefineLibraryLabelSet 是否已赋值
                     * @return UserDefineLibraryLabelSet 是否已赋值
                     */
                    bool UserDefineLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取Figure library. Valid values:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
<li>All: Both default and custom figure libraries will be used.</li>
                     * @return FaceLibrary Figure library. Valid values:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
<li>All: Both default and custom figure libraries will be used.</li>
                     */
                    std::string GetFaceLibrary() const;

                    /**
                     * 设置Figure library. Valid values:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
<li>All: Both default and custom figure libraries will be used.</li>
                     * @param FaceLibrary Figure library. Valid values:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
<li>All: Both default and custom figure libraries will be used.</li>
                     */
                    void SetFaceLibrary(const std::string& _faceLibrary);

                    /**
                     * 判断参数 FaceLibrary 是否已赋值
                     * @return FaceLibrary 是否已赋值
                     */
                    bool FaceLibraryHasBeenSet() const;

                private:

                    /**
                     * Switch of a face recognition task. Valid values:
<li>ON: Enables an intelligent face recognition task;</li>
<li>OFF: Disables an intelligent face recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Face recognition filter score. If this score is reached or exceeded, a recognition result will be returned. Value range: 0-100.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Default figure filter tag, which specifies the default figure tag that needs to be returned. If this parameter is left empty or an empty value is entered, all results of the default figures will be returned. Valid values:
<li>entertainment: Entertainment celebrity;</li>
<li>sport: Sports celebrity;</li>
<li>politician: Politically sensitive figure.</li>
                     */
                    std::vector<std::string> m_defaultLibraryLabelSet;
                    bool m_defaultLibraryLabelSetHasBeenSet;

                    /**
                     * Custom face tags for filter, which specify the face recognition results to return. If this parameter is not specified or left empty, the recognition results for all custom face tags are returned.
Up to 100 tags are allowed, each containing no more than 16 characters.
                     */
                    std::vector<std::string> m_userDefineLibraryLabelSet;
                    bool m_userDefineLibraryLabelSetHasBeenSet;

                    /**
                     * Figure library. Valid values:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
<li>All: Both default and custom figure libraries will be used.</li>
                     */
                    std::string m_faceLibrary;
                    bool m_faceLibraryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FACECONFIGUREINFOFORUPDATE_H_
