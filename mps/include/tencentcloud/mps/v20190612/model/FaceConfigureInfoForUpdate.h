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
                * Face Recognition Task Control Parameter
                */
                class FaceConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    FaceConfigureInfoForUpdate();
                    ~FaceConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Face Recognition task switch. Valid values:
<li>ON: Enable intelligent face recognition task.</li>
<li>OFF: Disables the intelligent face recognition task.</li>
                     * @return Switch Face Recognition task switch. Valid values:
<li>ON: Enable intelligent face recognition task.</li>
<li>OFF: Disables the intelligent face recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Face Recognition task switch. Valid values:
<li>ON: Enable intelligent face recognition task.</li>
<li>OFF: Disables the intelligent face recognition task.</li>
                     * @param _switch Face Recognition task switch. Valid values:
<li>ON: Enable intelligent face recognition task.</li>
<li>OFF: Disables the intelligent face recognition task.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Face recognition filter score. Returns the recognition result when the recognition result reaches this score or higher. Value ranges from 0 to 100.
                     * @return Score Face recognition filter score. Returns the recognition result when the recognition result reaches this score or higher. Value ranges from 0 to 100.
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置Face recognition filter score. Returns the recognition result when the recognition result reaches this score or higher. Value ranges from 0 to 100.
                     * @param _score Face recognition filter score. Returns the recognition result when the recognition result reaches this score or higher. Value ranges from 0 to 100.
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Default character filter tag. Specify the tag of the default character to be returned. If left blank or empty, all default character results will be returned. Tag value range:
<li>entertainment: entertainment star;</li>
<li>Sport: sports celebrity;</li>
<li>politician: sensitive person.</li>
                     * @return DefaultLibraryLabelSet Default character filter tag. Specify the tag of the default character to be returned. If left blank or empty, all default character results will be returned. Tag value range:
<li>entertainment: entertainment star;</li>
<li>Sport: sports celebrity;</li>
<li>politician: sensitive person.</li>
                     * 
                     */
                    std::vector<std::string> GetDefaultLibraryLabelSet() const;

                    /**
                     * 设置Default character filter tag. Specify the tag of the default character to be returned. If left blank or empty, all default character results will be returned. Tag value range:
<li>entertainment: entertainment star;</li>
<li>Sport: sports celebrity;</li>
<li>politician: sensitive person.</li>
                     * @param _defaultLibraryLabelSet Default character filter tag. Specify the tag of the default character to be returned. If left blank or empty, all default character results will be returned. Tag value range:
<li>entertainment: entertainment star;</li>
<li>Sport: sports celebrity;</li>
<li>politician: sensitive person.</li>
                     * 
                     */
                    void SetDefaultLibraryLabelSet(const std::vector<std::string>& _defaultLibraryLabelSet);

                    /**
                     * 判断参数 DefaultLibraryLabelSet 是否已赋值
                     * @return DefaultLibraryLabelSet 是否已赋值
                     * 
                     */
                    bool DefaultLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取User-defined character filter tag. Specify the tag of the user-defined character to return. If left blank or empty, all custom character results are returned.
The number of tags is up to 100, and each tag can have up to 16 characters.
                     * @return UserDefineLibraryLabelSet User-defined character filter tag. Specify the tag of the user-defined character to return. If left blank or empty, all custom character results are returned.
The number of tags is up to 100, and each tag can have up to 16 characters.
                     * 
                     */
                    std::vector<std::string> GetUserDefineLibraryLabelSet() const;

                    /**
                     * 设置User-defined character filter tag. Specify the tag of the user-defined character to return. If left blank or empty, all custom character results are returned.
The number of tags is up to 100, and each tag can have up to 16 characters.
                     * @param _userDefineLibraryLabelSet User-defined character filter tag. Specify the tag of the user-defined character to return. If left blank or empty, all custom character results are returned.
The number of tags is up to 100, and each tag can have up to 16 characters.
                     * 
                     */
                    void SetUserDefineLibraryLabelSet(const std::vector<std::string>& _userDefineLibraryLabelSet);

                    /**
                     * 判断参数 UserDefineLibraryLabelSet 是否已赋值
                     * @return UserDefineLibraryLabelSet 是否已赋值
                     * 
                     */
                    bool UserDefineLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取Figure library selection. Available values:
<li>Default: Use default character library;</li>
<li>UserDefine: Use the user-defined character library.</li>
<li>All: Use default character library and user-defined character library simultaneously.</li>
                     * @return FaceLibrary Figure library selection. Available values:
<li>Default: Use default character library;</li>
<li>UserDefine: Use the user-defined character library.</li>
<li>All: Use default character library and user-defined character library simultaneously.</li>
                     * 
                     */
                    std::string GetFaceLibrary() const;

                    /**
                     * 设置Figure library selection. Available values:
<li>Default: Use default character library;</li>
<li>UserDefine: Use the user-defined character library.</li>
<li>All: Use default character library and user-defined character library simultaneously.</li>
                     * @param _faceLibrary Figure library selection. Available values:
<li>Default: Use default character library;</li>
<li>UserDefine: Use the user-defined character library.</li>
<li>All: Use default character library and user-defined character library simultaneously.</li>
                     * 
                     */
                    void SetFaceLibrary(const std::string& _faceLibrary);

                    /**
                     * 判断参数 FaceLibrary 是否已赋值
                     * @return FaceLibrary 是否已赋值
                     * 
                     */
                    bool FaceLibraryHasBeenSet() const;

                private:

                    /**
                     * Face Recognition task switch. Valid values:
<li>ON: Enable intelligent face recognition task.</li>
<li>OFF: Disables the intelligent face recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Face recognition filter score. Returns the recognition result when the recognition result reaches this score or higher. Value ranges from 0 to 100.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Default character filter tag. Specify the tag of the default character to be returned. If left blank or empty, all default character results will be returned. Tag value range:
<li>entertainment: entertainment star;</li>
<li>Sport: sports celebrity;</li>
<li>politician: sensitive person.</li>
                     */
                    std::vector<std::string> m_defaultLibraryLabelSet;
                    bool m_defaultLibraryLabelSetHasBeenSet;

                    /**
                     * User-defined character filter tag. Specify the tag of the user-defined character to return. If left blank or empty, all custom character results are returned.
The number of tags is up to 100, and each tag can have up to 16 characters.
                     */
                    std::vector<std::string> m_userDefineLibraryLabelSet;
                    bool m_userDefineLibraryLabelSetHasBeenSet;

                    /**
                     * Figure library selection. Available values:
<li>Default: Use default character library;</li>
<li>UserDefine: Use the user-defined character library.</li>
<li>All: Use default character library and user-defined character library simultaneously.</li>
                     */
                    std::string m_faceLibrary;
                    bool m_faceLibraryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FACECONFIGUREINFOFORUPDATE_H_
