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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Attack backtracking node information
                */
                class VertexInfo : public AbstractModel
                {
                public:
                    VertexInfo();
                    ~VertexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type: process: 1; network: 2; file: 3; ssh: 4;
                     * @return Type Node type: process: 1; network: 2; file: 3; ssh: 4;
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Node type: process: 1; network: 2; file: 3; ssh: 4;
                     * @param _type Node type: process: 1; network: 2; file: 3; ssh: 4;
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取VID contained in this node
                     * @return Vid VID contained in this node
                     * 
                     */
                    std::string GetVid() const;

                    /**
                     * 设置VID contained in this node
                     * @param _vid VID contained in this node
                     * 
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     * 
                     */
                    bool VidHasBeenSet() const;

                    /**
                     * 获取Parent node VID of this node
                     * @return ParentVid Parent node VID of this node
                     * 
                     */
                    std::string GetParentVid() const;

                    /**
                     * 设置Parent node VID of this node
                     * @param _parentVid Parent node VID of this node
                     * 
                     */
                    void SetParentVid(const std::string& _parentVid);

                    /**
                     * 判断参数 ParentVid 是否已赋值
                     * @return ParentVid 是否已赋值
                     * 
                     */
                    bool ParentVidHasBeenSet() const;

                    /**
                     * 获取Whether a leaf node
                     * @return IsLeaf Whether a leaf node
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置Whether a leaf node
                     * @param _isLeaf Whether a leaf node
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取Process name. This parameter is used when Type is 1.
                     * @return ProcNamePrefix Process name. This parameter is used when Type is 1.
                     * 
                     */
                    std::string GetProcNamePrefix() const;

                    /**
                     * 设置Process name. This parameter is used when Type is 1.
                     * @param _procNamePrefix Process name. This parameter is used when Type is 1.
                     * 
                     */
                    void SetProcNamePrefix(const std::string& _procNamePrefix);

                    /**
                     * 判断参数 ProcNamePrefix 是否已赋值
                     * @return ProcNamePrefix 是否已赋值
                     * 
                     */
                    bool ProcNamePrefixHasBeenSet() const;

                    /**
                     * 获取Process name MD5. This parameter is used when Type is 1.
                     * @return ProcNameMd5 Process name MD5. This parameter is used when Type is 1.
                     * 
                     */
                    std::string GetProcNameMd5() const;

                    /**
                     * 设置Process name MD5. This parameter is used when Type is 1.
                     * @param _procNameMd5 Process name MD5. This parameter is used when Type is 1.
                     * 
                     */
                    void SetProcNameMd5(const std::string& _procNameMd5);

                    /**
                     * 判断参数 ProcNameMd5 是否已赋值
                     * @return ProcNameMd5 是否已赋值
                     * 
                     */
                    bool ProcNameMd5HasBeenSet() const;

                    /**
                     * 获取Command line. This parameter is used when Type is 1.
                     * @return CmdLinePrefix Command line. This parameter is used when Type is 1.
                     * 
                     */
                    std::string GetCmdLinePrefix() const;

                    /**
                     * 设置Command line. This parameter is used when Type is 1.
                     * @param _cmdLinePrefix Command line. This parameter is used when Type is 1.
                     * 
                     */
                    void SetCmdLinePrefix(const std::string& _cmdLinePrefix);

                    /**
                     * 判断参数 CmdLinePrefix 是否已赋值
                     * @return CmdLinePrefix 是否已赋值
                     * 
                     */
                    bool CmdLinePrefixHasBeenSet() const;

                    /**
                     * 获取Command line MD5. This parameter is used when Type is 1.
                     * @return CmdLineMd5 Command line MD5. This parameter is used when Type is 1.
                     * 
                     */
                    std::string GetCmdLineMd5() const;

                    /**
                     * 设置Command line MD5. This parameter is used when Type is 1.
                     * @param _cmdLineMd5 Command line MD5. This parameter is used when Type is 1.
                     * 
                     */
                    void SetCmdLineMd5(const std::string& _cmdLineMd5);

                    /**
                     * 判断参数 CmdLineMd5 是否已赋值
                     * @return CmdLineMd5 是否已赋值
                     * 
                     */
                    bool CmdLineMd5HasBeenSet() const;

                    /**
                     * 获取File path. This parameter is used when Type is 3.
                     * @return FilePathPrefix File path. This parameter is used when Type is 3.
                     * 
                     */
                    std::string GetFilePathPrefix() const;

                    /**
                     * 设置File path. This parameter is used when Type is 3.
                     * @param _filePathPrefix File path. This parameter is used when Type is 3.
                     * 
                     */
                    void SetFilePathPrefix(const std::string& _filePathPrefix);

                    /**
                     * 判断参数 FilePathPrefix 是否已赋值
                     * @return FilePathPrefix 是否已赋值
                     * 
                     */
                    bool FilePathPrefixHasBeenSet() const;

                    /**
                     * 获取Request destination address. This parameter is used when Type is 2.
                     * @return AddressPrefix Request destination address. This parameter is used when Type is 2.
                     * 
                     */
                    std::string GetAddressPrefix() const;

                    /**
                     * 设置Request destination address. This parameter is used when Type is 2.
                     * @param _addressPrefix Request destination address. This parameter is used when Type is 2.
                     * 
                     */
                    void SetAddressPrefix(const std::string& _addressPrefix);

                    /**
                     * 判断参数 AddressPrefix 是否已赋值
                     * @return AddressPrefix 是否已赋值
                     * 
                     */
                    bool AddressPrefixHasBeenSet() const;

                    /**
                     * 获取Whether a vulnerability node
                     * @return IsWeDetect Whether a vulnerability node
                     * 
                     */
                    bool GetIsWeDetect() const;

                    /**
                     * 设置Whether a vulnerability node
                     * @param _isWeDetect Whether a vulnerability node
                     * 
                     */
                    void SetIsWeDetect(const bool& _isWeDetect);

                    /**
                     * 判断参数 IsWeDetect 是否已赋值
                     * @return IsWeDetect 是否已赋值
                     * 
                     */
                    bool IsWeDetectHasBeenSet() const;

                    /**
                     * 获取Whether an alarm node
                     * @return IsAlarm Whether an alarm node
                     * 
                     */
                    bool GetIsAlarm() const;

                    /**
                     * 设置Whether an alarm node
                     * @param _isAlarm Whether an alarm node
                     * 
                     */
                    void SetIsAlarm(const bool& _isAlarm);

                    /**
                     * 判断参数 IsAlarm 是否已赋值
                     * @return IsAlarm 是否已赋值
                     * 
                     */
                    bool IsAlarmHasBeenSet() const;

                    /**
                     * 获取File path MD5. This parameter is used when Type is 3.
                     * @return FilePathMd5 File path MD5. This parameter is used when Type is 3.
                     * 
                     */
                    std::string GetFilePathMd5() const;

                    /**
                     * 设置File path MD5. This parameter is used when Type is 3.
                     * @param _filePathMd5 File path MD5. This parameter is used when Type is 3.
                     * 
                     */
                    void SetFilePathMd5(const std::string& _filePathMd5);

                    /**
                     * 判断参数 FilePathMd5 是否已赋值
                     * @return FilePathMd5 是否已赋值
                     * 
                     */
                    bool FilePathMd5HasBeenSet() const;

                    /**
                     * 获取Request destination address MD5. This parameter is used when Type is 2.
                     * @return AddressMd5 Request destination address MD5. This parameter is used when Type is 2.
                     * 
                     */
                    std::string GetAddressMd5() const;

                    /**
                     * 设置Request destination address MD5. This parameter is used when Type is 2.
                     * @param _addressMd5 Request destination address MD5. This parameter is used when Type is 2.
                     * 
                     */
                    void SetAddressMd5(const std::string& _addressMd5);

                    /**
                     * 判断参数 AddressMd5 是否已赋值
                     * @return AddressMd5 是否已赋值
                     * 
                     */
                    bool AddressMd5HasBeenSet() const;

                private:

                    /**
                     * Node type: process: 1; network: 2; file: 3; ssh: 4;
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * VID contained in this node
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                    /**
                     * Parent node VID of this node
                     */
                    std::string m_parentVid;
                    bool m_parentVidHasBeenSet;

                    /**
                     * Whether a leaf node
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * Process name. This parameter is used when Type is 1.
                     */
                    std::string m_procNamePrefix;
                    bool m_procNamePrefixHasBeenSet;

                    /**
                     * Process name MD5. This parameter is used when Type is 1.
                     */
                    std::string m_procNameMd5;
                    bool m_procNameMd5HasBeenSet;

                    /**
                     * Command line. This parameter is used when Type is 1.
                     */
                    std::string m_cmdLinePrefix;
                    bool m_cmdLinePrefixHasBeenSet;

                    /**
                     * Command line MD5. This parameter is used when Type is 1.
                     */
                    std::string m_cmdLineMd5;
                    bool m_cmdLineMd5HasBeenSet;

                    /**
                     * File path. This parameter is used when Type is 3.
                     */
                    std::string m_filePathPrefix;
                    bool m_filePathPrefixHasBeenSet;

                    /**
                     * Request destination address. This parameter is used when Type is 2.
                     */
                    std::string m_addressPrefix;
                    bool m_addressPrefixHasBeenSet;

                    /**
                     * Whether a vulnerability node
                     */
                    bool m_isWeDetect;
                    bool m_isWeDetectHasBeenSet;

                    /**
                     * Whether an alarm node
                     */
                    bool m_isAlarm;
                    bool m_isAlarmHasBeenSet;

                    /**
                     * File path MD5. This parameter is used when Type is 3.
                     */
                    std::string m_filePathMd5;
                    bool m_filePathMd5HasBeenSet;

                    /**
                     * Request destination address MD5. This parameter is used when Type is 2.
                     */
                    std::string m_addressMd5;
                    bool m_addressMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXINFO_H_
