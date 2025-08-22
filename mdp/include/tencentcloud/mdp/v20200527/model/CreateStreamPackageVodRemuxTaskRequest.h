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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGEVODREMUXTASKREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGEVODREMUXTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/InputFileInfo.h>
#include <tencentcloud/mdp/v20200527/model/OutputStorage.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * CreateStreamPackageVodRemuxTask request structure.
                */
                class CreateStreamPackageVodRemuxTaskRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageVodRemuxTaskRequest();
                    ~CreateStreamPackageVodRemuxTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VOD remux task name.
                     * @return Name VOD remux task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置VOD remux task name.
                     * @param _name VOD remux task name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The supported remuxing formats for VOD remux tasks.
Optional values: WEBVTT.
                     * @return Type The supported remuxing formats for VOD remux tasks.
Optional values: WEBVTT.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The supported remuxing formats for VOD remux tasks.
Optional values: WEBVTT.
                     * @param _type The supported remuxing formats for VOD remux tasks.
Optional values: WEBVTT.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Input configuration.
                     * @return InputFileInfo Input configuration.
                     * 
                     */
                    InputFileInfo GetInputFileInfo() const;

                    /**
                     * 设置Input configuration.
                     * @param _inputFileInfo Input configuration.
                     * 
                     */
                    void SetInputFileInfo(const InputFileInfo& _inputFileInfo);

                    /**
                     * 判断参数 InputFileInfo 是否已赋值
                     * @return InputFileInfo 是否已赋值
                     * 
                     */
                    bool InputFileInfoHasBeenSet() const;

                    /**
                     * 获取Output configuration.
                     * @return OutputStorage Output configuration.
                     * 
                     */
                    OutputStorage GetOutputStorage() const;

                    /**
                     * 设置Output configuration.
                     * @param _outputStorage Output configuration.
                     * 
                     */
                    void SetOutputStorage(const OutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * VOD remux task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The supported remuxing formats for VOD remux tasks.
Optional values: WEBVTT.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Input configuration.
                     */
                    InputFileInfo m_inputFileInfo;
                    bool m_inputFileInfoHasBeenSet;

                    /**
                     * Output configuration.
                     */
                    OutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGEVODREMUXTASKREQUEST_H_
