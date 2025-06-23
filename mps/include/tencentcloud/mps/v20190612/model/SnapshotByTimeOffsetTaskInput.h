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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/NumberFormat.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input parameter type of a time point screenshot task
                */
                class SnapshotByTimeOffsetTaskInput : public AbstractModel
                {
                public:
                    SnapshotByTimeOffsetTaskInput();
                    ~SnapshotByTimeOffsetTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of a time point screenshot template.
                     * @return Definition ID of a time point screenshot template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置ID of a time point screenshot template.
                     * @param _definition ID of a time point screenshot template.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取List of screenshot time points in the format of `s` or `%`:
<li>If the string ends in `s`, it means that the time point is in seconds; for example, `3.5s` means that the time point is the 3.5th second;</li>
<li>If the string ends in `%`, it means that the time point is the specified percentage of the video duration; for example, `10%` means that the time point is 10% of the video duration.</li>
                     * @return ExtTimeOffsetSet List of screenshot time points in the format of `s` or `%`:
<li>If the string ends in `s`, it means that the time point is in seconds; for example, `3.5s` means that the time point is the 3.5th second;</li>
<li>If the string ends in `%`, it means that the time point is the specified percentage of the video duration; for example, `10%` means that the time point is 10% of the video duration.</li>
                     * 
                     */
                    std::vector<std::string> GetExtTimeOffsetSet() const;

                    /**
                     * 设置List of screenshot time points in the format of `s` or `%`:
<li>If the string ends in `s`, it means that the time point is in seconds; for example, `3.5s` means that the time point is the 3.5th second;</li>
<li>If the string ends in `%`, it means that the time point is the specified percentage of the video duration; for example, `10%` means that the time point is 10% of the video duration.</li>
                     * @param _extTimeOffsetSet List of screenshot time points in the format of `s` or `%`:
<li>If the string ends in `s`, it means that the time point is in seconds; for example, `3.5s` means that the time point is the 3.5th second;</li>
<li>If the string ends in `%`, it means that the time point is the specified percentage of the video duration; for example, `10%` means that the time point is 10% of the video duration.</li>
                     * 
                     */
                    void SetExtTimeOffsetSet(const std::vector<std::string>& _extTimeOffsetSet);

                    /**
                     * 判断参数 ExtTimeOffsetSet 是否已赋值
                     * @return ExtTimeOffsetSet 是否已赋值
                     * 
                     */
                    bool ExtTimeOffsetSetHasBeenSet() const;

                    /**
                     * 获取List of time points of screenshots in <font color=red>seconds</font>.
                     * @return TimeOffsetSet List of time points of screenshots in <font color=red>seconds</font>.
                     * 
                     */
                    std::vector<double> GetTimeOffsetSet() const;

                    /**
                     * 设置List of time points of screenshots in <font color=red>seconds</font>.
                     * @param _timeOffsetSet List of time points of screenshots in <font color=red>seconds</font>.
                     * 
                     */
                    void SetTimeOffsetSet(const std::vector<double>& _timeOffsetSet);

                    /**
                     * 判断参数 TimeOffsetSet 是否已赋值
                     * @return TimeOffsetSet 是否已赋值
                     * 
                     */
                    bool TimeOffsetSetHasBeenSet() const;

                    /**
                     * 获取List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WatermarkSet List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _watermarkSet List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取Target bucket of a generated time point screenshot file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputStorage Target bucket of a generated time point screenshot file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target bucket of a generated time point screenshot file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputStorage Target bucket of a generated time point screenshot file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取Output path for an image file of screenshots taken at specific time points, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_snapshotByTimeOffset_{definition}_{number}.{format}`.
                     * @return OutputObjectPath Output path for an image file of screenshots taken at specific time points, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_snapshotByTimeOffset_{definition}_{number}.{format}`.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置Output path for an image file of screenshots taken at specific time points, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_snapshotByTimeOffset_{definition}_{number}.{format}`.
                     * @param _outputObjectPath Output path for an image file of screenshots taken at specific time points, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_snapshotByTimeOffset_{definition}_{number}.{format}`.
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取Rule of the `{number}` variable in the time point screenshot output path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectNumberFormat Rule of the `{number}` variable in the time point screenshot output path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置Rule of the `{number}` variable in the time point screenshot output path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectNumberFormat Rule of the `{number}` variable in the time point screenshot output path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     * 
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                private:

                    /**
                     * ID of a time point screenshot template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * List of screenshot time points in the format of `s` or `%`:
<li>If the string ends in `s`, it means that the time point is in seconds; for example, `3.5s` means that the time point is the 3.5th second;</li>
<li>If the string ends in `%`, it means that the time point is the specified percentage of the video duration; for example, `10%` means that the time point is 10% of the video duration.</li>
                     */
                    std::vector<std::string> m_extTimeOffsetSet;
                    bool m_extTimeOffsetSetHasBeenSet;

                    /**
                     * List of time points of screenshots in <font color=red>seconds</font>.
                     */
                    std::vector<double> m_timeOffsetSet;
                    bool m_timeOffsetSetHasBeenSet;

                    /**
                     * List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * Target bucket of a generated time point screenshot file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Output path for an image file of screenshots taken at specific time points, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_snapshotByTimeOffset_{definition}_{number}.{format}`.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * Rule of the `{number}` variable in the time point screenshot output path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_
