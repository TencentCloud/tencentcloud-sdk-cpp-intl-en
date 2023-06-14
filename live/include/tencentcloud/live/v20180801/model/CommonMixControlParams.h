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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCONTROLPARAMS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCONTROLPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * General stream mix control parameter
                */
                class CommonMixControlParams : public AbstractModel
                {
                public:
                    CommonMixControlParams();
                    ~CommonMixControlParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Value range: [0,1]. 
If 1 is entered, when the layer resolution in the parameter is different from the actual video resolution, the video will be automatically cropped according to the resolution set by the layer.
                     * @return UseMixCropCenter Value range: [0,1]. 
If 1 is entered, when the layer resolution in the parameter is different from the actual video resolution, the video will be automatically cropped according to the resolution set by the layer.
                     * 
                     */
                    int64_t GetUseMixCropCenter() const;

                    /**
                     * 设置Value range: [0,1]. 
If 1 is entered, when the layer resolution in the parameter is different from the actual video resolution, the video will be automatically cropped according to the resolution set by the layer.
                     * @param _useMixCropCenter Value range: [0,1]. 
If 1 is entered, when the layer resolution in the parameter is different from the actual video resolution, the video will be automatically cropped according to the resolution set by the layer.
                     * 
                     */
                    void SetUseMixCropCenter(const int64_t& _useMixCropCenter);

                    /**
                     * 判断参数 UseMixCropCenter 是否已赋值
                     * @return UseMixCropCenter 是否已赋值
                     * 
                     */
                    bool UseMixCropCenterHasBeenSet() const;

                    /**
                     * 获取Value range: [0,1].
If this parameter is set to 1, when both `InputStreamList` and `OutputParams.OutputStreamType` are set to 1, you can copy a stream instead of canceling it.
                     * @return AllowCopy Value range: [0,1].
If this parameter is set to 1, when both `InputStreamList` and `OutputParams.OutputStreamType` are set to 1, you can copy a stream instead of canceling it.
                     * 
                     */
                    int64_t GetAllowCopy() const;

                    /**
                     * 设置Value range: [0,1].
If this parameter is set to 1, when both `InputStreamList` and `OutputParams.OutputStreamType` are set to 1, you can copy a stream instead of canceling it.
                     * @param _allowCopy Value range: [0,1].
If this parameter is set to 1, when both `InputStreamList` and `OutputParams.OutputStreamType` are set to 1, you can copy a stream instead of canceling it.
                     * 
                     */
                    void SetAllowCopy(const int64_t& _allowCopy);

                    /**
                     * 判断参数 AllowCopy 是否已赋值
                     * @return AllowCopy 是否已赋值
                     * 
                     */
                    bool AllowCopyHasBeenSet() const;

                    /**
                     * 获取Valid values: 0, 1
If you set this parameter to 1, SEI (Supplemental Enhanced Information) of the input streams will be passed through.
                     * @return PassInputSei Valid values: 0, 1
If you set this parameter to 1, SEI (Supplemental Enhanced Information) of the input streams will be passed through.
                     * 
                     */
                    int64_t GetPassInputSei() const;

                    /**
                     * 设置Valid values: 0, 1
If you set this parameter to 1, SEI (Supplemental Enhanced Information) of the input streams will be passed through.
                     * @param _passInputSei Valid values: 0, 1
If you set this parameter to 1, SEI (Supplemental Enhanced Information) of the input streams will be passed through.
                     * 
                     */
                    void SetPassInputSei(const int64_t& _passInputSei);

                    /**
                     * 判断参数 PassInputSei 是否已赋值
                     * @return PassInputSei 是否已赋值
                     * 
                     */
                    bool PassInputSeiHasBeenSet() const;

                private:

                    /**
                     * Value range: [0,1]. 
If 1 is entered, when the layer resolution in the parameter is different from the actual video resolution, the video will be automatically cropped according to the resolution set by the layer.
                     */
                    int64_t m_useMixCropCenter;
                    bool m_useMixCropCenterHasBeenSet;

                    /**
                     * Value range: [0,1].
If this parameter is set to 1, when both `InputStreamList` and `OutputParams.OutputStreamType` are set to 1, you can copy a stream instead of canceling it.
                     */
                    int64_t m_allowCopy;
                    bool m_allowCopyHasBeenSet;

                    /**
                     * Valid values: 0, 1
If you set this parameter to 1, SEI (Supplemental Enhanced Information) of the input streams will be passed through.
                     */
                    int64_t m_passInputSei;
                    bool m_passInputSeiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCONTROLPARAMS_H_
